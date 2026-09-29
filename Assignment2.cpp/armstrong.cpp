#include <iostream>
using namespace std;

int main()
{
    int number;
    int original;
    int remainder;
    int digits = 0;
    int sum = 0;

    // Accept number from the user
    cout << "Enter a number: ";
    cin >> number;

    original = number;

    // Count the number of digits
    int temp = number;

    if (temp == 0)
    {
        digits = 1;
    }
    else
    {
        while (temp != 0)
        {
            digits++;
            temp = temp / 10;
        }
    }

    // Calculate the sum of digits raised to the power
    // of the number of digits
    temp = number;

    while (temp != 0)
    {
        remainder = temp % 10;

        int power = 1;

        for (int i = 1; i <= digits; i++)
        {
            power = power * remainder;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    // Check whether the number is Armstrong
    if (sum == original)
    {
        cout << original << " is an Armstrong number." << endl;
    }
    else
    {
        cout << original << " is not an Armstrong number."
             << endl;
    }

    return 0;
}