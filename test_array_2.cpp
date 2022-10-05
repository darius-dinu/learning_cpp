#include <iostream>
using namespace std;

int main(){
    int lista[5] = {1, 3, 5, 7, 9};     //Se da o lista
    int suma = 0;                       //Valoare pe care o are suma initial si care nu afecteaza rezultatul final 
    int produs = 1;                     //Valoare pe care o are produsul initial si care nu afecteaza rezultatul final


    for (int i = 0; i < 5; i++){        //Dorim sa parcurgem lista folosind un parametru (mai mic decat lungimea listei, incrementeaza de fiecare data) care aici corespunde cu indexul fiecarul element din vector
        suma += lista[i];               //Prima iteratie: suma = 1. A doua iteratie: suma = 4. A treia iteratie: suma = 9, etc.
    }


    for (int j = 0; j < 5; j++){       
        produs *= lista[j];             //Prima iteratie: produs = 1. A doua iteratie: produs = 3. A treia iteratie: produs = 15, etc.
    }


    cout << suma << endl;
    cout << produs << endl;

    return 0;

}