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

    int element;
    cout << "Enter element to find frequency: ";
    cin >> element;

    int frequency = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == element)
        {
            frequency++;
        }
    }

    cout << "Frequency of " << element << " = " << frequency << endl;

    return 0;
}