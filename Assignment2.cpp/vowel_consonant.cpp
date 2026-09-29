#include <iostream>
using namespace std;

int main()
{
    char alphabet;

    // Accept an alphabet from the user
    cout << "Enter an alphabet: ";
    cin >> alphabet;

    // Check whether the character is a vowel
    if (alphabet == 'a' || alphabet == 'e' ||
        alphabet == 'i' || alphabet == 'o' ||
        alphabet == 'u' || alphabet == 'A' ||
        alphabet == 'E' || alphabet == 'I' ||
        alphabet == 'O' || alphabet == 'U')
    {
        cout << alphabet << " is a Vowel." << endl;
    }
    else
    {
        cout << alphabet << " is a Consonant." << endl;
    }

    return 0;
}