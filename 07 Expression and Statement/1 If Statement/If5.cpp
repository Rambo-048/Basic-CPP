#include <iostream>

using namespace std;

int main()
{
	int a;
	int b;
	int c;
	int d;
	int e;

	cout << "Insert Value 1 : ";
	cin >> a;
	cout << "Insert Value 2 : ";
	cin >> b;
	cout << "Insert Value 3 : ";
	cin >> c;
	cout << "Insert Value 4 : ";
	cin >> d;
	cout << "Insert Value 5 : ";
	cin >> e;

	if ((a == 28 && b == 32) && (c == 32 && d == 36)){
		
		int value1 = (((a + b) - c) + d) / e 

		cout << "\nCondition Check..." << endl;
		cout << "\nCondition True" << endl;
		cout << value1 << endl;

		if (value1 == 8){
			cout << "\nTrue" << endl;

			int value2 = value1 + value1
			
			cout << value2 << endl;

			if (value2 == 2 * 8) {
				cout << "\nCondition Check..." << endl;
				cout << "\nWONDERFULL..!!" << endl;
			} 
		} else {				
				cout << "\nFalse" << endl;
		}

	} else {
		cout << "\nCondition False" << endl;
	}

	cin.get();
	return 0;
}
