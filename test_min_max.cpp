// Maxime si minime:


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
