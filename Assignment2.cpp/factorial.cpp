#include <iostream>
using namespace std;

int main()
{
    int number;
    long long factorial = 1;

    // Accept number from the user
    cout << "Enter a number: ";
    cin >> number;

    // Calculate factorial
    if (number < 0)
    {
        cout << "Factorial is not defined for negative numbers."
             << endl;
    }
    else
    {
        for (int i = 1; i <= number; i++)
        {
            factorial = factorial * i;
        }

        cout << "Factorial of " << number
             << " = " << factorial << endl;
    }

    return 0;
}