#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int position = 0;

    // Move all non-zero elements to the beginning
    for (int i = 0; i < n; i++)
    {
        if (v[i] != 0)
        {
            v[position] = v[i];
            position++;
        }
    }

    // Fill remaining positions with zero
    while (position < n)
    {
        v[position] = 0;
        position++;
    }

    cout << "Array after moving all zeros to the end: ";

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    return 0;
}