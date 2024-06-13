#include <iostream>
#include <string>

bool estIncluse(const std::string& chaine1, const std::string& chaine2) {
    size_t pos = chaine2.find(chaine1);
    return pos != std::string::npos;
}

int main() {
    std::string chaine1, chaine2;

    // Demander à l'utilisateur d'entrer les deux chaînes de caractères
    std::cout << "Entrez la premiere chaine de caracteres : ";
    std::getline(std::cin, chaine1);

    std::cout << "Entrez la deuxieme chaine de caracteres : ";
    std::getline(std::cin, chaine2);

    // Appel de la fonction et affichage du résultat
    if (estIncluse(chaine1, chaine2)) {
        std::cout << "La premiere chaine est incluse dans la deuxieme." << std::endl;
    } else {
        std::cout << "La premiere chaine n'est pas incluse dans la deuxieme." << std::endl;
    }

    return 0;
}
