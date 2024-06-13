// Personne.hpp
#ifndef PERSONNE_HPP
#define PERSONNE_HPP

#include <string>
using namespace std;

class Personne {
private:
    string nom;
    int pointsDeVie;
    float defense;

public:
    Personne(string nom, int pointsDeVie, float defense) : nom(nom), pointsDeVie(pointsDeVie), defense(defense) {}
    void afficherInfos();
    void modifierPointsDeVie(int pv);
    void modifierDefense(float def);
};

#endif
