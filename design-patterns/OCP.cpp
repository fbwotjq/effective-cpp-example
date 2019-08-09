//
// Created by jaco.ryu on 2019-08-06.
//

#include <iostream>
#include <string>
#include <vector>

enum class Color { Red, Green, Blue };
enum class Size { Small, Medium, Large };

struct Product {
    std::string name;
    Color color;
    Size size;
};

typedef std::vector<Product> ProductList;

struct ProductFilter {
    static ProductList by_color(ProductList items, Color color) {
        ProductList result;
        for (auto& item : items)
            if(item.color == color) result.push_back(item);
        return result;
    }

    static ProductList by_size(ProductList items, Size size) {
        ProductList result;
        for (auto& item : items)
            if(item.size == size) result.push_back(item);
        return result;
    }

    static ProductList by_color_and_size(ProductList items, Color color, Size size) {
        ProductList result;
        for (auto& item : items)
            if(item.color == color && item.size == size) result.push_back(item);
        return result;
    }
};

template <typename T>
struct ISpecification {
    virtual bool is_satisfied(T item) = 0;
};

template <typename T>
struct AndSpecification : ISpecification<T> {

    ISpecification<T>& first;
    ISpecification<T>& second;

    AndSpecification(ISpecification<T>& first, ISpecification<T>& second) : first{first}, second{second} {}
    bool is_satisfied(T item) override {
        return first.is_satisfied(item) && second.is_satisfied(item);
    }

};

struct ColorSpecification : ISpecification<Product> {

    Color color;

    explicit ColorSpecification(const Color color) : color{color} {}

    bool is_satisfied(Product item) override { return item.color == color; }

};

struct SizeSpecification : ISpecification<Product> {

    Size size;

    explicit SizeSpecification(const Size size) : size{size} {}

    bool is_satisfied(Product item) override { return item.size == size; }

};

template <typename T>
struct IFilter {
    virtual ProductList filter(ProductList& items, ISpecification<T>& spec) = 0;
};

struct BetterFilter : IFilter<Product> {
    ProductList filter(ProductList& items, ISpecification<Product>& spec) override {
        ProductList result;
        for (auto& item : items)
            if(spec.is_satisfied(item)) result.push_back(item);
        return result;
    }
};

int main() {

    Product apple{"Apple", Color::Green, Size::Small};
    Product tree{"Tree", Color::Green, Size::Large};
    Product house{"House", Color::Blue, Size::Large};

    ProductList all{apple, tree, house};

    BetterFilter bf;

    ColorSpecification green(Color::Green);
    auto green_things = bf.filter(all, green);
    for (auto& product : green_things)
        std::cout << product.name << " is green " << std::endl;

    std::cout << "============================================" << std::endl;

    SizeSpecification large(Size::Large);
    auto large_things = bf.filter(all, large);
    for(auto& product : large_things)
        std::cout << product.name << " is large " << std::endl;



}