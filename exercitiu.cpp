#include <iostream>
using namespace std;

int main()
{
    int n, cn, c;
    cin >> n;
    cn = 0; 

    while (n > 9 && cn == 0) {
        c = n % 10;
        cn = n / 10;
        while (cn > 0 && cn % 10 !=c)
            cn = cn / 10;
            n = n/ 10;
        
    }
    if (cn == 0){
        cout << "Cifre distincte";
    }
    else{
        cout << "Cifre nedistincte";
    }
    return 0;
}       







// Pentru n = 11 => In primul while: c = 1 si cn = 1 (ele nu mai intra deloc pe al doilea while, cn ramanand 1, si se intoarce "Cifre nedistincte")
// Pentru n = 323 => In primul while: c = 3 si cn = 32 (ele intra pe al doilea while) => Acum cn = 3, c ramane 3, nu se mai verifica conditia din while si intoarce din nou "Cifre nedistincte"
// Pentru n - 1004 => In primul while: c = 4 si cn = 100 ( ele intra pe al doilea while) => Acum cn = 10, c = 4 (ramane pe al doilea while, si scapa de ultima cifra. Acum codul pentru 100)




// Obs:
// Daca numarul tau e mai mic ca 9, atunci el nu va mai trece prin conditiile while-ului, si se va executa codul de la linia 18 in colo
// Scopul codului este sa se ajunga la valoarea lui cn. Daca el este 0, atunci numarul are cifre distincte. Daca nu, atunci are cifre care se repeta.