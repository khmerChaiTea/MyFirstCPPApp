//#include<iostream>
//using namespace std;
//
//int main()
//{
//	float num1, num2;
//	char operation;
//
//	cout << "---*** Prem's Calculator ***---\n\n";
//	cout << "Please enter numbers and an operator between them: \n";
//	cin >> num1 >> operation >> num2;
//
//	switch (operation)
//	{
//	case '-':cout << num1 << operation << num2 << " = " << num1 - num2; break;
//	case '+':cout << num1 << operation << num2 << " = " << num1 + num2; break;
//	case '/':cout << num1 << operation << num2 << " = " << num1 / num2; break;
//	case '*':cout << num1 << operation << num2 << " = " << num1 * num2; break;
//	case '%':
//		bool isNum1Int, isNum2Int;
//		isNum1Int = ((int)num1 == num1); // 5 == 5.0; Type casting 
//		isNum2Int = ((int)num2 == num2);
//
//		if (isNum1Int && isNum2Int)
//			cout << num1 << operation << num2 << " = " << (int)num1 % (int)num2;
//		else
//			cout << "Not valid!\n";
//
//		break;
//
//	default:
//		cout << "Not a valid operation!\n";
//		break;
//	}
//
//	system("pause>0");
//}