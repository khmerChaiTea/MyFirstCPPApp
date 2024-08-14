#include <iostream>
using namespace std;

int main()
{
    // If Else Statement
    // Tasks:
    // User enters integer number (whole number)
    // Program write out if that number is even or odd

    int number;
    cout << "Please enter whole number ";
    cin >> number;
    if (number % 2 == 0)    // Used == for comparison and = to assign
    {
        cout << "You have entered even number" << endl;
    }
    else
    {
        cout << "You have entered odd number" << endl;
    }

    cout << "Thanks. Bye.";

    system("pause>0");
}

