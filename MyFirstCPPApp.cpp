#include <iostream>
using namespace std;

int main()
{
    // Data Types
    int yearOfBirth = 1995;
    char gender = 'f';  // Stored 'f' or 'm' -- female for male
    bool isOlderThan18 = true;  // Used for true or false
    float averageGrade = 4.5;   // Used for decimal (4 bytes) or 32 bits
    double balance = 468466546165; // Used for decimal (8 bytes), double the float

    cout << "Size of int is " << sizeof(int) << " bytes\n";
    // -1, -2, -3, ..., -2147483648
    cout << "Int min value is " << INT_MIN << endl; // INT_MIN is reserved word
    // 0, 1, 2, 3, ..., 2147483647
    cout << "Int max value is " << INT_MAX << endl; // INT_MAX is reserved word

    // Used for positive values
    cout << "Size of unsigned int is " << sizeof(unsigned int) << " bytes\n";
    cout << "UInt max value is " << UINT_MAX << endl;

    cout << "Size of bool is " << sizeof(bool) << " bytes\n";
    cout << "Size of char is " << sizeof(char) << " bytes\n";
    cout << "Size of float is " << sizeof(float) << " bytes\n";
    cout << "Size of double is " << sizeof(double) << " bytes\n";

    system("pause>0");
}

