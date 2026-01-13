
#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	int b = 4;

	bool total1, total2;

	// Operator Logical : Not, And, Or

	// Not
	total1 = !(a == b); // True = 1
	total2 = !(a == 10); // False = 0
	cout << total1 << endl;
	cout << total2 << endl;

	// And
	total1 = (a == 10) and (b == 4); // True and True = True
	cout << total1 << endl;
	total1 = (a == 4) and (b == 4); // False and True = False
	cout << total1 << endl;
	total1 = (a == 10) and (b == 10); // True and False = False
	cout << total1 << endl;
	total1 = (a == 4) and (b == 10); // False and False = False
	cout << total1 << endl;

	// Or 
	total2 = (a == 10) or (b == 4); // True and True = True
	cout << total2 << endl;
	total2 = (a == 4) or (b == 4); // False and True = True
	cout << total2 << endl;
	total2 = (a == 10) or (b == 10); // True and False = True
	cout << total2 << endl;
	total2 = (a == 4) or (b == 10); // False and False = False
	cout << total2 << endl;

	cin.get();
	return 0;
}

