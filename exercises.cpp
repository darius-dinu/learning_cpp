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
