#include <iostream>
#include <ctime>




int main() {

    int number;
    int tentative = 0;

    srand(time(0));
    int secret = rand()%1000 + 1;

    // std::cout << secret;

    std::cout << "Devine le numéro secret entre 1 et 1000 : ";
    std::cin >> number;


    while (number != secret) {

        if ( number > secret ) {
            std::cout << "C'est moins.\n";
        } else {
            std::cout << "C'est plus.\n";
        }

        std::cout << "Reessaie : ";
        std::cin >> number;

        tentative++;

        std::cout << "Tentative n "<< tentative << "\n";

    } 

    std::cout << "Bravo!";
    std::cout << "Tu as trouve au bout de " << tentative << " tentatives.\n";


    return 0;
}