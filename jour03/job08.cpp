#include <iostream>
#include <string>

int main() {
    std::string chaine;
    std::cout << "Entrez une chaine de caracteres : ";
    std::getline(std::cin, chaine);

    char tab[chaine.length() + 1]; // +1 pour le caractère de fin de chaîne '\0'

    for (size_t i = 0; i < chaine.length(); ++i) {
        tab[i] = chaine[i];
    }
    tab[chaine.length()] = '\0'; // Ajouter le caractère de fin de la chaîne

    std::cout << "Le contenu du tableau tab est : " << tab << std::endl;

    return 0;
}
