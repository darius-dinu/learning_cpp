#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    a = 20;
    b = 13;
    c = 57;

    
    if(a > b && a > c){
        cout << "A este cel mai mare numar." << endl;
    }
    else if(b > c && b > a){
        cout << "B este cel mai mare numar." << endl;
    }
    else{
        cout << "C este cel mai mare numar." << endl;
    }



    // && = AND;
    // || = OR;
    // == = Equal to (verifica relatia de egalitate);
    // != = Not equal to (verifica relatia de inegalitate);
    // > = Greater than;
    // <= Smaller than.
}