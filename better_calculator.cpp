#include <iostream>

using namespace std;

int main()
{
    double firstNum, secondNum;
    char operator1;
    cout << "Insert the first number: "; cin >> firstNum;

    cout << "Insert the operator: "; cin >> operator1;

    cout << "Insert the second number: "; cin >> secondNum;


    if (operator1 == '+')
        cout << "The result is: " << firstNum + secondNum;
    else if (operator1 == '-')
        cout << "The result is: " << firstNum - secondNum;
    else if (operator1 == '*')
        cout << "The result is: " << firstNum * secondNum;
    else if (operator1 == '/')
        cout << "The result is: " << firstNum / secondNum;
    else
        cout << "Invalid operator";
    return 0;
}