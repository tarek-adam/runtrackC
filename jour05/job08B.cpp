// Chat.hpp
#ifndef CHAT_HPP
#define CHAT_HPP

#include "Animal.hpp"

class Chat : public Animal {
public:
    void crier() override {
        cout << "Miaou!" << endl;
    }
    void manger() override {
        cout << "Le chat mange du poisson." << endl;
    }
};

#endif
