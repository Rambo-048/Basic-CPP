#include <iostream>

using namespace std;

int main()
{
	int a;
	int b;
	int value;

	cout << "Insert Value 1 : ";
	cin >> a;
	cout << "Insert Value 2 : ";
	cin >> b;

	if (a == 28){
		cout << (a * b) + 5 << endl;
		cout << "Everyday Is A Blessing And Every Blessing Is A Miracle" << endl;	
	} else if (a == 32){
		cout << (a * b) + 5 << endl;
		cout << "Thankful, Greatful, Blessed" << endl;	
	} else{
		cout << "VALUE-NOT-FOUND" << endl;
	}

	cin.get();
	return 0;
}
