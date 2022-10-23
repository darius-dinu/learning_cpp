#include <iostream>
#include <fstream>
using namespace std;


ifstream fin ("test.in");   // Se defineste fisierul care va contine datele de intrare;
ofstream fout ("test.out"); // Se defineste fisierul care va contine datele de iesire;
int main()
{
    int a, b;
    fin >> a >> b;          // Cele doua numere se vor scrie in fisierul de input;
    fin.close();            // Se inchide fisierul;

    fout << a + b;          // Se va afisa rezultatul operatiei in fisierul care contine datele de iesire;
    fout.close();           // Se inchide fisierul.


}
