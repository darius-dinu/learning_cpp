// 1. Write a C++ program that returns the inverted of an input number.

#include <iostream>
using namespace std;

int main()
{
    long long number, digit;
    cin >> number;          // This is the input number.
    while (number)
    {
        digit = number % 10;       // The formula for calculating the last digit of a number
        number /= 10;              // The formula for removing the last digit of a number
        cout << digit;             // The only existing problem is if we have a number like 100, 001 will be printed.         
    }
    return 0;
}   




// 2. Write a C++ program that checks if a number is a super-palindrome. (A super-palindrome is a number that is a palindrome and also the square of the number is a palindrome)

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long number, temp, verificare, DigitsNumber = 0, invertN = 0, square, temp2, verificare2, DigitsSquare = 0, invertSquare = 0;
    cin >> number;
    temp = number;                       // Variable that is used for calculating the number of digits for the initial number.
    verificare = number;                 // Variable that is used for checking.
    square = number * number;
    temp2 = square;                      // Variable that is used for calculating the number of digits for the square.
    verificare2 = square;                // Variable that is used for checking.

    while (temp)                         // While loop that calculates the number of digits for the initial number
    {
        DigitsNumber ++;
        temp /= 10;

    }
    

    while (number && DigitsNumber)                      // While loop that calculates the inverted of the initial number
    {
        invertN += (n % 10) * pow (10, DigitsNumber - 1);
        number /= 10;
        DigitsNumber --;
    }
    

    while (temp2)                       // While loop that calculates the number of digits for the square
    {
        DigitsSquare++;
        temp2 /= 10;

    }

    while (square && DigitsSquare)                      // While loop that calculates the inverted of the square
    {
        invertSquare += (square % 10) * pow (10, DigitsSquare - 1);
        square /= 10;
        DigitsSquare --;
    }

    if (verificare == invertN && verificare2 == invertSquare)       // If-Else statement that checks if the number is a palindrome
        cout << "The number is a super-palindrome";
    else
        cout << "The number isn't a super-palindrome";
}