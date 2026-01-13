#include <iostream>

using namespace std;

int main()
{
	int a;
	cout << "Insert Value : ";
	cin >> a;

	if(a == 5) {
		cout << "Feel Blessings Every Moment, This Will Bring Success Of All Matters" << endl;
	} else if(a == 15) {
		cout << "Everyday Is A Blessing And Every Blessing Is A Miracle" << endl;
	} else if (a == 25) {
		cout << "Thankful, Greatful, Blessed" << endl; 
	} else {
		cout << "VALUE-NOT-FOUND" << endl;
	}

	cin.get();
	return 0;
}


