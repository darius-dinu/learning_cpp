#include <iostream>

using namespace std;

// This code requires the user to write numbers until the appearance of 0. The code will return how many odd numbers have been written.

int main()
{
    long long number = 1, countOdd = 0;
    for (int i = 0; number != 0;)
    {
        cin >> number;
        if (number % 2 != 0)
            countOdd++;
        if (!number)
            break;
    }
    cout << countOdd;
    return 0;
}




// The code below is an exponent function that should return the power of a number to a certain exponent.


int power(long long base, long long exp)
{
    long long result = 1;
    for (int i = 0; i < exp; ++i)
        result *= base;

    return result;
}

int main()
{
    cout << power(3, 4);            // This will return 81.
    return 0;
}