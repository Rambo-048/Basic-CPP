#include <iostream>

using namespace std;

int main()
{
	int a = 5;
	int b = 2;

	bool total1, total2;

	// Operator Logical : Not, And, Or

	// Not
	total1 = !(a == b); // True = 1
	total2 = !(a == 5); // False = 0
	cout << total1 << endl;
	cout << total2 << endl;

	// And
	total1 = (a == 5) and (b == 2); // True and True = True
	cout << total1 << endl;
	total1 = (a == 2) and (b == 2); // False and True = False
	cout << total1 << endl;
	total1 = (a == 5) and (b == 5); // True and False = False
	cout << total1 << endl;
	total1 = (a == 2) and (b == 5); // False and False = False
	cout << total1 << endl;

	// Or 
	total2 = (a == 5) or (b == 2); // True and True = True
	cout << total2 << endl;
	total2 = (a == 2) or (b == 2); // False and True = True
	cout << total2 << endl;
	total2 = (a == 5) or (b == 5); // True and False = True
	cout << total2 << endl;
	total2 = (a == 2) or (b == 5); // False and False = False
	cout << total2 << endl;

	cin.get();
	return 0;
}