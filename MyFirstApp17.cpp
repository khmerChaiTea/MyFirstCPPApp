//#include<iostream>
//using namespace std;
//
//int main()
//{
//	// Count digits of a number
//	int number;
//	cout << "Number: ";
//	cin >> number;
//
//	if (number == 0)
//		cout << "You have entered 0.\n";
//	else
//	{
//		if (number < 0)
//			number = -1 * number; // Change negative number to positive
//
//		int counter = 0;
//		while (number > 0)
//		{
//			//number = number / 10;  // 123 --> 12.3/12 --> 1.2/1 ...
//			number /= 10;
//			counter++; // 0 --> 1 --> 2 ...
//		}
//		cout << "Number contains " << counter << " digits\n";
//	}
//
//	system("pause>0");
//}