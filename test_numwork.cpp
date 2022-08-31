#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a = 3;
    double b = 6.7;
    cout << a + b << endl;

    cout << 10 / 3 << endl;            //Aceste doua numere sunt intregi. Programul imi va intoarce doar partea intreaga a rezultatului.
    cout << 10.0 / 3.0 << endl;        //Aceleasi numere sunt scrise ca double-uri. Programul imi va intoarce intreg rezultatul, adica 3.(3)

    cout << pow(2, 3) << endl;         //Folosind biblioteca <cmath>, am acces la functia pow (ridicare la putere)
    cout << sqrt(81) << endl;          //Folosind biblioteca <cmath>, am acces la functia sqrt (calcul cu radicali)
    cout << round(3.3) << endl;        //Folosind biblioteca <cmath, am acces la functia round (rotunjirea numerelor)
    cout << floor(5.9) << endl;        //Folosind bibiloteca <cmath>, am acces la functia floor (apoximare prin lipsa)
    cout << ceil(4.1) << endl;         //Folosind biblioteca <cmath>, am acces la functia ceil (aproximare prin adaos)
    cout << fmax(2, 9) << endl;        //Folosind biblioteca <cmath>, am acces la functia fmax (compararea numerelor si intoarce numarul mai mare)
    cout << fmin(1, 12) << endl;       //Folosind biblioteca <cmath>, am acces la functia fmin (compararea numerelor si intoarce numarul mai mic)





    return 0;
}
