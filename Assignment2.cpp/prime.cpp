#include <iostream>
using namespace std;

int main()
{
    int number;
    bool isPrime = true;

    // Accept number from the user
    cout << "Enter a number: ";
    cin >> number;

    // Numbers less than 2 are not prime
    if (number < 2)
    {
        isPrime = false;
    }
    else
    {
        // Check divisibility
        for (int i = 2; i * i <= number; i++)
        {
            if (number % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
    {
        cout << number << " is a Prime number." << endl;
    }
    else
    {
        cout << number << " is not a Prime number." << endl;
    }

    return 0;
}