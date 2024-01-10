#include <iostream>

using namespace std;

int main()
{
	int a;
	int b;
	int c;
	int d;

	cout << "Insert Value 1 : ";
	cin >> a;
	cout << "Insert Value 2 : ";
	cin >> b;
	cout << "Insert Value 3 : ";
	cin >> c;
	cout << "Insert Value 4 : ";
	cin >> d;

	if ((a == 5 && b == 10) && (c == 15 && d == 20)){
		
		int value1 = (a + c) / a 

		cout << "\nCondition Check..." << endl;
		cout << "\nCondition True" << endl;
		cout << value1 << endl;

		if (value1 == 4){
			cout << "\nTrue" << endl;

			int value2 = value1 * value1
			
			cout << value2 << endl;

			if (value2 == 2 ^ 4) {
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