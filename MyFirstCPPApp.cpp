#include <iostream>
using namespace std;

int main()
{
    // If Else Statement (Nested)
    // Tasks:
    // Users enters side lengths of a triangle (a, b, c)
    // Program should write out whether that triangle is equilateral, isosceles or scalene
    float a, b, c;
    cout << "a, b, c: ";
    cin >> a >> b >> c;

    if (a == b && b == c)   // Please check
        cout << "Equilateral triangle"; // If only pnly one code you can omit '{}'
    else
    {
        if (a != b && a != c && b != c)
            cout << "Scalene triangle";
        else
            cout << "Isosceles triangle";
    }

    system("pause>0");
}

