#include <iostream>

using namespace std;

int main()
{
	int a;
	int value;

	cout << "Insert Value : ";
	cin >> a;

	if (a == 9){
		cout << a * 4 << endl;
		cout << "Yeah.. !!" << endl;	
	} else if (a == 8){
		cout << a * 4 << endl;
		cout << "Nice Combo.. !!" << endl;	
	} else if (a == 7){
		cout << a * 4 << endl;
		cout << "Amazing..!!" << endl;
	} else{
		cout << "VALUE-NOT-FOUND" << endl;
	}

	cin.get();
	return 0;
}