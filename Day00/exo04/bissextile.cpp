#include <iostream>
#include <string>
using namespace std;

string bissextile(int annee){
	if (annee % 400 ==0) {
		return "L'année est bissextile";
	}
    if ((annee % 4 == 0 && annee % 100 != 0)) {
		return "L'année est bissextile";
	} else {
		return "L'année n'est pas bissextile";
	}
	return "L'année n'est pas bissextile";
	
}

int main() {
    int annee;
	cout << "Entrez l'année : ";
	cin >> annee;
	cout << bissextile(annee);
    return 0;
}