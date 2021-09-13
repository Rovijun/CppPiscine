#include <iostream>
#include <string>
using namespace std;

int main() {
    string nom;
	cout << "Bonjour ! Quel est votre prénom ? ";
	getline (cin, nom);
	cout << nom << " enchanté moi c'est James, James Bond";
    return 0;
}