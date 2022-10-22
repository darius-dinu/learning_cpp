#include <iostream>
#include <fstream>
using namespace std;


ifstream fin ("test.in");
ofstream fout ("test.out");
int main()
{
    int a, b;
    fin >> a >> b;
    fin.close();

    fout << a + b;
    fout.close();


}
