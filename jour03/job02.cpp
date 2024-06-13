#include <iostream>
#include <string>

using namespace std;

bool isVowel(char c) {
    // Fonction pour vérifier si un caractère est une voyelle
    c = tolower(c); // Convertir le caractère en minuscule
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
}

string removeVowels(const string& phrase) {
    string result = "";
    for (char c : phrase) {
        if (!isVowel(c)) {
            // Si le caractère n'est pas une voyelle, on l'ajoute au résultat
            result += c;
        }
    }
    return result;
}

int main() {
    string phrase = "vive la plateforme !";
    string phraseSansVoyelles = removeVowels(phrase);
    cout << phraseSansVoyelles << endl;
    return 0;
}
