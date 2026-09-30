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

    vector<int> unique;

    for (int i = 0; i < n; i++)
    {
        bool duplicate = false;

        for (int j = 0; j < unique.size(); j++)
        {
            if (v[i] == unique[j])
            {
                duplicate = true;
                break;
            }
        }

        if (!duplicate)
        {
            unique.push_back(v[i]);
        }
    }

    cout << "Array after removing duplicates: ";

    for (int i = 0; i < unique.size(); i++)
    {
        cout << unique[i] << " ";
    }

    cout << endl;

    return 0;
}