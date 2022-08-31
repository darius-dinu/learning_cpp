#include <iostream>
using namespace std;

int main ()
{
    int varsta;
    cout << "Cati ani ai?: ";
    cin >> varsta;

    cout << "Ai " << varsta << " ani" << endl;

    string nume;
    cout << "Cum te cheama?: ";
    getline(cin, nume);        //getline imi ia toata linia de input si o va putea intoarce.
    cout << "Salut, " << nume << endl;



    return 0;
}
