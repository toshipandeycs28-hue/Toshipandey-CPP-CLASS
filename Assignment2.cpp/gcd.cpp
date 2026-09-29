#include <iostream>
using namespace std;

int main()
{
    int a, b;

    // Accept two numbers
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int x = a;
    int y = b;

    // Euclidean algorithm to find GCD
    while (y != 0)
    {
        int remainder = x % y;
        x = y;
        y = remainder;
    }

    cout << "GCD of " << a << " and " << b
         << " = " << x << endl;

    return 0;
}