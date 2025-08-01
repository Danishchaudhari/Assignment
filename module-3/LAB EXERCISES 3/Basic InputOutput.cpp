#include <iostream>  // For input and output
#include <string>    // For using string type
using namespace std;

int main()
{
    string name;   // To store user's name
    int age;       // To store user's age

    // Ask for user's name
    cout << "Enter your name: ";
    getline(cin, name);  // Use getline to read full name including spaces

    // Ask for user's age
    cout << "Enter your age: ";
    cin >> age;

    // Display personalized greeting
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;

    return 0;
}
