#include <iostream>
using namespace std;

int fizzbuzz(int valeur){

    if ((valeur % 3 ==0) && (valeur % 5 != 0)) {
        cout << "fizz";

    }  if ((valeur % 5 ==0) && (valeur % 3 != 0)) {
        cout << "buzz";

    }  if (valeur % 3 == 0 && valeur % 5 == 0) {
        cout << "fizzbuzz";

        } if (valeur % 3 != 0 && valeur % 5 != 0) {
        cout << "N'est pas fizzbuzz";
        }

    return valeur;
}

int main() {
    int valeur;
    cout << "Test fizzbuzz : ";
    cin >> valeur;
    fizzbuzz(valeur);
    return 0;
}