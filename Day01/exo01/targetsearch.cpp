#include <iostream>

using namespace std;

int search(int tab[], int target) {
    for(int i=0; tab[i]!='\0'; i++) {
        if(tab[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {

    int tab[] = {5,7,12,20,50};
    cout << search(tab,50) << "\n";
    return 0;
}