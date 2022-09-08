#include <iostream>
using namespace std;

int main() 
{
    int lista[] = {1, 2, 3, 4, 5};      // Atunci cand vrem sa declaram array-uri, acestea trebuie sa fie insotite de [] in numele variabilei, si de {} cand declaram numerele.
    cout << lista[0] << endl;           // Codul intoarce elementul cu index 0, adica 1.

    lista[2] = 8;                       // Array-urile pot suferi modificari, astfel incat elementul cu index 2 (3) devine 8.
    cout << lista[2] << endl;

    int lista2[10];                     // Putem declara numarul de elemente ale unui array
    lista2[0] = 69;                     // Si putem declara fiecare index in parte
    cout << lista2[0] << endl;


    return 0;





}