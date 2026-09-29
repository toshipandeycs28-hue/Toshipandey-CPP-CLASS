#include <iostream>
using namespace std;

int main()
{
    int year;

    // Accept year from the user
    cout << "Enter a year: ";
    cin >> year;

    // A leap year is divisible by 400,
    // or divisible by 4 but not by 100.
    if ((year % 400 == 0) ||
        (year % 4 == 0 && year % 100 != 0))
    {
        cout << year << " is a Leap Year." << endl;
    }
    else
    {
        cout << year << " is not a Leap Year." << endl;
    }

    return 0;
}