#include <iostream>
using namespace std;

int main()
{
    int number;

    // Accept input from the user
    cout << "Enter a number: ";
    cin >> number;

    // Check whether the number is even or odd
    if (number % 2 == 0)
    {
        cout << number << " is an Even number." << endl;
    }
    else
    {
        cout << number << " is an Odd number." << endl;
    }

    return 0;
}