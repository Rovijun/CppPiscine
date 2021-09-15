#include <iostream>
#include <string>
#include <ctime>

using namespace std;


int main() {
	string shifumi[3] = { "Pierre", "Papier", "Ciseaux" };
	
	srand(time(0));
	int melange = rand() % 3;

	cout << "Tapez un chiffre : 1 - Pierre, 2 - Papier ou 3 - Ciseaux" << endl;
	for (int i=0; i<3 ; i++) {
		int choix;
		cin >> choix;
		cout << shifumi[choix-1] << endl;
	}
    return 0;
}