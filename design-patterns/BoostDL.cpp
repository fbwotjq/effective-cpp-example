//
// Created by jaco.ryu on 2019-08-08.
//

// Dependencies should be abstract rather than concrete.
// Use interfaces instead of concrete types/classes.

// Introduction: https://boost-experimental.github.io/di/index.html
// Tutorial:     https://boost-experimental.github.io/di/tutorial/index.html
// Install :     https://boost-experimental.github.io/di/overview/
// Github :      https://github.com/boost-experimental/di


// 설치
// 1 . brew install boost
// 2 . wget https://raw.githubusercontent.com/boost-experimental/di/cpp14/include/boost/di.hpp
// 3 . mv di.hpp /usr/local/Cellar/boost/1.70.0/include/boost/.
// 4 . include_directories("/usr/local/Cellar/boost/1.70.0/include/boost") 를 CMakeLists.txt에 추가

#include <iostream>
#include <memory>
#include "/usr/local/Cellar/boost/1.70.0/include/boost/di.hpp"

struct ILogger {
    virtual void Log(const std::string& s) = 0;
};

struct ConsoleLogger : ILogger {
    void Log(const std::string& s) override {
        std::cout << "LOG: " << s.c_str() << std::endl;
    }
};

struct Engine {

    float volume = 5;
    int horse_power = 400;

    Engine() {};

    friend std::ostream&operator<<(std::ostream& os, Engine& obj) {
        return os << "volume: " << obj.volume << " horse_power: " << obj.horse_power;
    }

};

struct Car {

    std::shared_ptr<Engine> engine;
    std::shared_ptr<ILogger> logger;

    Car(const std::shared_ptr<Engine>& engine, const std::shared_ptr<ILogger> i_logger)
        : engine{engine}, logger{i_logger} {
        logger->Log("Created a car");
    }

    friend std::ostream&operator<<(std::ostream& os, const Car& obj) {
        return os << "car with engin: " << *obj.engine;
    }

};

int main() {

    std::cout << "without DI\n";
    auto e1 = std::make_shared<Engine>();
    auto logger1 = std::make_shared<ConsoleLogger>();
    auto c1 = std::make_shared<Car>(e1, logger1);
    std::cout << *c1 << std::endl;

    std::cout << "with DI\n";
    using namespace boost;
    auto injector = di::make_injector(di::bind<ILogger>().to<ConsoleLogger>());
    auto c = injector.create<std::shared_ptr<Car>>();
    std::cout << *c << std::endl;

    return 0;
}