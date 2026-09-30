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

    int largest = v[0];
    int smallest = v[0];

    for (int i = 1; i < n; i++)
    {
        if (v[i] > largest)
        {
            largest = v[i];
        }

        if (v[i] < smallest)
        {
            smallest = v[i];
        }
    }

    cout << "Largest element = " << largest << endl;
    cout << "Smallest element = " << smallest << endl;

    return 0;
}
