#include <iostream>

using namespace std;

int main()
{
    string correctAnswer = "A shadow";
    cout << "Each morning I appear to lie at your feet. All day I will follow no matter how fast you run, yet I nearly perish in the midday sun" << endl;
    
    string inputAnswer = "";
    int answerCount = 0;
    int answerLimit = 3;
    bool outOfGuesses = false;

    while (inputAnswer != correctAnswer && !outOfGuesses)
    {
        if (answerCount < answerLimit)
        {
            cout << "What am I?" << endl;
            getline (cin, inputAnswer);
            answerCount++;
        }
        else
            outOfGuesses = true;
    }
    if (outOfGuesses)
        cout << "You're out of guesses. You have lost!";
    else
        cout << "Bravo! You have won!";
    return 0;
}