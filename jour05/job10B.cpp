// Chat.hpp
#ifndef CHAT_HPP
#define CHAT_HPP

#include "Animal.hpp"

class Chat : public Animal {
public:
    void crier() override {
        cout << "Miaou!" << endl;
    }
    void manger(string aliment) override {
        if (aliment == "des croquettes") {
            cout << "Le chat mange des croquettes." << endl;
        } else {
            cout << "Le chat mange du poisson." << endl;
        }
    }
};

#endif
