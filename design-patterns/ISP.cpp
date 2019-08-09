//
// Created by jaco.ryu on 2019-08-08.
//

#include <iostream>
#include <string>
#include <vector>

struct Document {
    std::string content;
    explicit Document(std::string content) : content(content) {};
};

struct IMachineHuge {
    virtual void print(std::vector<Document> docs) = 0;
    virtual void scan(std::vector<Document> docs) = 0;
    virtual void fax(std::vector<Document> docs) = 0;
};

struct MFP : IMachineHuge {
    void print(std::vector<Document> docs) override ;
    void scan(std::vector<Document> docs) override ;
    void fax(std::vector<Document> docs) override ;
};

struct  IPrinter {
    virtual void print(std::vector<Document> docs) = 0;
};

struct IScanner {
    virtual void scan(std::vector<Document> docs) = 0;
};

struct Printer : IPrinter {
    void print(std::vector<Document> docs) override {
        for(auto& doc : docs) {
            std::cout << "Print:\t" << doc.content << std::endl;
        }
    }
};

struct Scanner :IScanner {
    void scan(std::vector<Document> docs) override {
        for(auto& doc : docs) {
            std::cout << "Scan:\t" << doc.content << std::endl;
        }
    }
};

struct IMachine : IPrinter, IScanner {};

struct Machine : IMachine {

    IPrinter& printer;
    IScanner& scanner;

    Machine(IPrinter& printer, IScanner& scanner) : printer{printer}, scanner{scanner} {}

    void print(std::vector<Document> docs) override { printer.print(docs); }
    void scan(std::vector<Document> docs) override  { scanner.scan(docs); }

};

int main() {

    Printer printer;
    Scanner scanner;

    Machine machine{printer, scanner};

    std::vector<Document> documents{Document(std::string("hello")), Document(std::string("Hello"))};

    machine.print(documents);
    machine.scan(documents);

    return 0;
}