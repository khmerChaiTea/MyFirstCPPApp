#include <iostream>
using namespace std;

int main()
{
    // Ciphering words using ASCII
    char c1, c2, c3, c4, c5;    // You can assign variables like this since they are of the same type
    cout << "Enter 5 letters: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;  // Getting input; will not take space and enter as character
    cout << "\nASCII message: " << int(c1) << " " << int(c2) << " " << int(c3)
        << " " << int(c4) << " " << int(c5);

    system("pause>0");
}

