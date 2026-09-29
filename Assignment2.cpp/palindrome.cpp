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

    // Reverse the number
    while (number != 0)
    {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number = number / 10;
    }

    // Compare original and reversed number
    if (original == reversed)
    {
        cout << original << " is a Palindrome number." << endl;
    }
    else
    {
        cout << original << " is not a Palindrome number."
             << endl;
    }

    return 0;
}