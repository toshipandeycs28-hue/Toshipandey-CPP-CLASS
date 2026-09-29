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

    // Find GCD
    while (y != 0)
    {
        int remainder = x % y;
        x = y;
        y = remainder;
    }

    int gcd = x;

    // Calculate LCM using the formula:
    // LCM = (a * b) / GCD
    int lcm = (a * b) / gcd;

    cout << "LCM of " << a << " and " << b
         << " = " << lcm << endl;

    return 0;
}