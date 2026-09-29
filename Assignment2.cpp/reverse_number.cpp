#include <iostream>
using namespace std;

int main()
{
    int number;
    int reversed = 0;

    // Accept number from the user
    cout << "Enter a number: ";
    cin >> number;

    int original = number;

    // Reverse the digits
    while (number != 0)
    {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number = number / 10;
    }

    cout << "Reverse of " << original
         << " = " << reversed << endl;

    return 0;
}