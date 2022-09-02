#include <iostream>
using namespace std;

int main()
{
    cout << "Cine are [substantiv], pe pamant, nu in gand, " << endl;
    cout << "Mai [verb la indicativ] si-n somn ochii lumii [verb la gerunziu]. " << endl;

    string substantiv, verb_indicativ, verb_gerunziu;
    cout << "Introdu substantivul: " << endl;
    getline(cin, substantiv);
    cout << "Introdu verbul la indicativ: " << endl;
    getline(cin, verb_indicativ);
    cout << "Introdu verbul la gerunziu: " << endl;
    getline(cin, verb_gerunziu);

    cout << "Cine are " << substantiv << ", pe pamant, nu in gand, " << endl;
    cout << "Mai " << verb_indicativ << " si-n somn ochii lumii " << verb_gerunziu << '.' <<endl;

    return 0;



}