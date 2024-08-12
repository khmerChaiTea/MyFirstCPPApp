#include <iostream> // Header file, a library
using namespace std;    // Help by minimize using std::

int main()  // Main function
{
    // Variables -- container for certain data types
    float annualSalary; // No assign value yet -- will throw a build error (Danger, uninitialized variables)
    cout << "Please enter your annual salary ";    // Write a message to the user
    cin >> annualSalary;
    float monthlySalary = annualSalary / 12;    // Compiler error
    cout << "You monthly salary is " << monthlySalary;
    cout << "\nIn ten years you will earn " << annualSalary * 10 << endl;   // Notice that '\n' for new line or 'endl' is another way for new line

    char characater = 'a';  // Use '' for character variables -- give meaningful name to your variables

    // Use to get rid of extra info on the console
    system("pause>0");
}

