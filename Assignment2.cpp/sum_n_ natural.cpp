#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;

    // Accept N from the user
    cout << "Enter the value of N: ";
    cin >> n;

    // Calculate sum of first N natural numbers
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    cout << "Sum of first " << n
         << " natural numbers = " << sum << endl;

    return 0;
}