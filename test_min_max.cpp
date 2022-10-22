// Maxime si minime:
// Acest cod cere utilizatorului sa introduca de la tastatura trei numere si se vor afisa pe ecran cel mai mare si cel mai mic numar dintre numere.

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, max, min;
    cin >> a >> b >> c;
    max = a;
    min = a;
    
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    if (b < min)
        max = b;
    if (c < min)
        min = c;
    
    cout << max << " " << min;
    return 0;

}
