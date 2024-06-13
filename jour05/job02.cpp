// Joueur.hpp
#ifndef JOUEUR_HPP
#define JOUEUR_HPP

class Joueur {
private:
    int x, y;

public:
    Joueur() : x(0), y(0) {} // Constructeur par défaut
    Joueur(int newX, int newY) : x(newX), y(newY) {} // Constructeur avec paramètres
    Joueur(int newX, int newY, std::string nom) : x(newX), y(newY) {} // Constructeur avec paramètres + nom
    void setPosition(int newX, int newY);
    void afficherPosition();
    void deplacer(int dx, int dy);
};

#endif
