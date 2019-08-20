//
// Created by jaco.ryu on 2019-08-13.
//
#pragma once

#include <string>
#include <iostream>

class PersonBuilder;

class Person {

    std::string street_address, post_code, city;

    std::string company_name, positionl;

    int annual_income = 0;

    Person() {}

public:
    static PersonBuilder create();

    Person(Person&& other) : street_address{move(other.street_address)},
        post_code{move(other.post_code)},
        city{move(other.city)}

};