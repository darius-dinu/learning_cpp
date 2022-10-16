#include <iostream>
using namespace std;

// Acesta este un cod care cere utilizatorului sa introduca numere pana la aparatia lui 0. Codul va intoarce cate numere din cele introduse erau impare.

int main(){
    long long n = 1, c = 0;
    for (int i = 0; n != 0;){
        cin >> n;
        if (n % 2 != 0){
            c++;
        }
        if (!n){
            break;
        }
    }
    cout << c;
    return 0;
}