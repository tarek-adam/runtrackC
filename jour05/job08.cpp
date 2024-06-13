// Animal.hpp
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void crier() = 0;
    virtual void manger() = 0;
};

#endif
