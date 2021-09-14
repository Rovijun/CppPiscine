#include <iostream>
using namespace std;

int main() {
    double recette = 31000000;
	int semaine = 1;
	double cagnotte = 31000000;

	while (cagnotte < 150000000) {
		cagnotte = cagnotte + (recette * 80 / 100);
		recette = recette * 80 / 100;
		semaine++;
	} cout << "Nombre de semaine " << semaine << endl; 

    return 0;
}