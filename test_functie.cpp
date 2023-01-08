#include <iostream>
using namespace std;

void salut(string a)                        // Aceasta este o functie care primeste ca parametru un string
{
    cout << "Salutare, " << a << endl;      // Functia trebuie sa salute user-ul.
}

int main()                                  // In functie main, apelam functia salut       
{
    salut("Darius");                         // Apelarea functiei salut cu parametrul "Darius"
    return 0;
}