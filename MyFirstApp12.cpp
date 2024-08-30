#include<iostream>
using namespace std;

int main()
{
	// BMI calculator
	// Weight(kg) / (height * height (m))
	// Underweight < 18.5
	// Normal Weight 18.5 - 24.9
	// Overweight 25 - 29.9
	// Obesity >= 30

	float weight, height, bmi;
	cout << "Weight(kg), height(m): ";
	cin >> weight >> height;
	bmi = weight / (height * height);

	if (bmi < 18.5)
		cout << "Underweight" << "\n";
	else if (bmi > 30)
		cout << "Obesity" << "\n";
	else if (bmi >= 18.5 && bmi < 25 )
		cout << "Normal Weight" << "\n";
	else
		cout << "Overweight" << "\n";

	cout << "You BMI is: " << bmi << "\n";

	system("pause>0");
}
