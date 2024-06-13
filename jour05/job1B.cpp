// main.cpp
#include <iostream>
#include "Joueur.hpp"
using namespace std;

int main() {
    Joueur joueur;
    joueur.setPosition(5, 5);
    joueur.afficherPosition();
    joueur.deplacer(1, -1);
    joueur.afficherPosition();
    return 0;
}
