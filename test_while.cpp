#include <iostream>
using namespace std;

// Acesta este un cod care cere utilizatorului sa introduca de la tastatura un numar, codul va calcula suma numerelor de la 1 pana la numarul introdus (suma Gauss)


int main()
{
    int x, suma = 0;   
    cin >> x;
    while (x > 0){
        suma += x;
        x--;
    }
    cout << suma;
    return 0;





}