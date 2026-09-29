#include <iostream>
using namespace std;

// Function to check whether a number is a Neon number
bool isNeon(int number)
{
    int square = number * number;
    int sum = 0;

    // Find sum of digits of the square
    while (square != 0)
    {
        sum = sum + square % 10;
        square = square / 10;
    }

    return sum == number;
}

int main()
{
    int start, end;

    // Accept range from the user
    cout << "Enter the starting number: ";
    cin >> start;

    cout << "Enter the ending number: ";
    cin >> end;

    cout << "Neon numbers between "
         << start << " and " << end << " are:" << endl;

    // Check every number in the range
    for (int number = start; number <= end; number++)
    {
        if (isNeon(number))
        {
            cout << number << " ";
        }
    }

    cout << endl;

    return 0;
}