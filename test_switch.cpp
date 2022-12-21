#include <iostream>

using namespace std;

string getSeasonName (int seasonNum)            // This is a function which should return the user the name of a season based on an number (1 - 4).
{
    string seasonName;
    
    switch (seasonNum)
    {
        case 1:
            seasonName = "Spring";
            break;
        case 2:
            seasonName = "Summer";
            break;
        case 3:
            seasonName = "Autumn";
            break;
        case 4:
            seasonName = "Winter";
            break;
        default:
            seasonName = "Invalid season name";
    }
    
    return seasonName;
}

int main()
{
    cout << getSeasonName(1);               // "Spring" should be returned.
    return 0;
}