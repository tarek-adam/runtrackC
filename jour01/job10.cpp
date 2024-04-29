#include <iostream>  // Include the standard iostream library

int main() {
    double prixHT, kilos, tauxTVA;  // Declare variables to store the input values

    // Prompt the user to enter the net price (prix HT) per kilogram of carrots
    std::cout << "Enter the net price (prix HT) per kilogram of carrots: ";
    std::cin >> prixHT;

    // Prompt the user to enter the number of kilograms of carrots
    std::cout << "Enter the number of kilograms of carrots: ";
    std::cin >> kilos;

    // Prompt the user to enter the tax rate (TVA) as a percentage
    std::cout << "Enter the tax rate (TVA) as a percentage: ";
    std::cin >> tauxTVA;

    // Calculate the total net price
    double totalNetPrice = prixHT * kilos;

    // Calculate the tax amount
    double taxAmount = totalNetPrice * (tauxTVA / 100);

    // Calculate the total price including tax (TTC)
    double totalPriceTTC = totalNetPrice + taxAmount;

    // Display the total price including tax (TTC)
    std::cout << "The total price including tax (TTC) is: " << totalPriceTTC << std::endl;

    return 0;  // Return 0 to indicate successful program termination
}
