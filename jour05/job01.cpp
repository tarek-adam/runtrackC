// Joueur.hpp
#ifndef JOUEUR_HPP
#define JOUEUR_HPP

class Joueur {
private:
    int x, y;

public:
    Joueur();
    void setPosition(int x, int y);
    void afficherPosition();
    void deplacer(int dx, int dy);
};

#endif
