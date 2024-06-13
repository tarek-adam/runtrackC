#include <iostream>
#include <algorithm>

int main() {
    std::string str1, str2 = "Bonjour";

    // Demander à l'utilisateur d'entrer une chaîne de caractères
    std::cout << "Entrez une chaine de caracteres : ";
    std::getline(std::cin, str1);

    // Trier les deux chaînes dans l'ordre lexicographique
    std::sort(str1.begin(), str1.end());
    std::sort(str2.begin(), str2.end());

    // Afficher les deux chaînes triées
    std::cout << "Chaine 1 trie : " << str1 << std::endl;
    std::cout << "Chaine 2 trie : " << str2 << std::endl;

    return 0;
}
