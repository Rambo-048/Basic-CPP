#include <iostream>

using namespace std;

int main()
{
	int n;
	int num1;
	int num2;
	int num3;

	cout << "Program Fibonacci Vertical\n";
	cout << "Insert Number : ";
	cin >> n;

	num2 = 1;
	num3 = 0;
	num1 = num2 + num3;
	cout << num1 << endl; 

	for (int i = 1; i < n; i++){
		num1 = num2 + num3;
		num3 = num2;
		num2 = num1;
		cout << num1 << endl;
	}

	cout << "F I N I S H" << endl;

	cin.get();
	return 0;
}

