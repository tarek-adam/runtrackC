// Joueur.hpp
#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <string>

class Joueur {
private:
    int x, y;
    std::string nom;

public:
    Joueur() : x(0), y(0), nom("Sans Nom") {} // Constructeur par défaut
    Joueur(int newX, int newY) : x(newX), y(newY), nom("Sans Nom") {} // Constructeur avec paramètres
    Joueur(int newX, int newY, std::string newNom) : x(newX), y(newY), nom(newNom) {} // Constructeur avec paramètres + nom
    void setPosition(int newX, int newY);
    void afficherPosition();
    void deplacer(int dx, int dy);
};

#endif
