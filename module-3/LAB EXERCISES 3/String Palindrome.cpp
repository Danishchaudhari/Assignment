#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string str, reversed;

    cout << "Enter a string: ";
    cin >> str;

    reversed = string(str.rbegin(), str.rend());

    if (str == reversed)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;
}

