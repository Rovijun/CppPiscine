#include <iostream>
#include <string>
using namespace std;

void appel(string nom){
    if (nom=="Johnny") {
        cout << "Hello, my love!";
    } else {
        cout << "Salut, " << nom << "!";
    }
}

int main() {
    string nom;
	cout << "Bonjour ! Quel est votre prénom ? ";
	getline (cin, nom);
	appel(nom);
    return 0;
}