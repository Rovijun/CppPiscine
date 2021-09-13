#include <iostream>
#include <string>
using namespace std;

int main() {
    string nom;
	cout << "Tapez votre prénom : ";
	getline (cin, nom);
	cout << "Bonjour, " << nom << " comment allez vous ? ";
    return 0;
}