#include <iostream>
using namespace std;

int main()
{
    int number;

    // Accept number from the user
    cout << "Enter a number: ";
    cin >> number;

    // Display multiplication table from 1 to 10
    cout << "Multiplication Table of " << number << ":" << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << number << " x " << i
             << " = " << number * i << endl;
    }

    return 0;
}