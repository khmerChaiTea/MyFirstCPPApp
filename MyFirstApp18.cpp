#include<iostream>
using namespace std;

int main()
{
	// Reversing number
	// 123 --> 3 2 1 --> 321

	int number, reversedNumber = 0;
	cout << "Number: ";
	cin >> number;

	while (number != 0)
	{
		reversedNumber *= 10;
		int lastDigit = number % 10;
		reversedNumber += lastDigit;
		number /= 10;
	}

	cout << "Reversed: " << reversedNumber;

	system("pause>0");
}