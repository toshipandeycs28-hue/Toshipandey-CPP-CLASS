#include <iostream>
using namespace std;

int main()
{
    int start, end;

    // Accept range from the user
    cout << "Enter the starting number: ";
    cin >> start;

    cout << "Enter the ending number: ";
    cin >> end;

    cout << "Prime numbers between "
         << start << " and " << end << " are:" << endl;

    // Check every number in the given range
    for (int number = start; number <= end; number++)
    {
        bool isPrime = true;

        if (number < 2)
        {
            isPrime = false;
        }
        else
        {
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
            cout << number << " ";
        }
    }

    cout << endl;

    return 0;
}