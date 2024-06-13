// Chien.hpp
#ifndef CHIEN_HPP
#define CHIEN_HPP

#include "Animal.hpp"

class Chien : public Animal {
public:
    void crier() override {
        cout << "Woof!" << endl;
    }
    void manger() override {
        cout << "Le chien a une alimentation variée." << endl;
    }
};

#endif
