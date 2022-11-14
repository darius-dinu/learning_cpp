// Write a C++ program that returns the number of even numbers and the number of odd numbers from an input array.

#include <iostream>
using namespace std;

int main()
{
    long long n, countEven = 0, countOdd = 0;
    cin >> n;   // n = length of the array
    long long a[n];


    // Now we'll need a loop that will store values in the indexes of the array.
    for (int input = 0; input < n; input++)     
    {
        cin >> a[input];
    }


    // And we'll also need a loop that will iterate through the array and check if the numbers are either even or odd.
    for (int itterate = 0; itterate < n; itterate++)
    {   
        
        if (a[itterate] % 2 == 0)
        {
            countEven++;
        }
        else
        {
            countOdd++;
        }
    }
    cout << countEven << " " << countOdd;
    return 0;
}