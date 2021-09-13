#include <iostream>
using namespace std;

int bissextile(int annee){
    if ((annee % 4 == 0 || annee % 400 == 0) && (annee % 100 !=0)) {
	    cout << "L'année est bissextile";
	} else {
		cout << "L'année n'est pas bissextile";
	}
	return annee;
}

int main() {
    int annee;
	cout << "Entrez l'année : ";
	cin >> annee;
	bissextile(annee);
    return 0;
}