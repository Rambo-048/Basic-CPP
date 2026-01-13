#include <iostream>

using namespace std;

int main()
{
	int a;
	int value;

	cout << "Insert Value : ";
	cin >> a;

	if (a == 28){
		cout << a * 3.5 << endl;
		cout << "Feel Blessings Every Moment, This Will Bring Success Of All Matters" << endl;	
	} else if (a == 32){
		cout << a * 3.5 << endl;
		cout << "Everyday Is A Blessing And Every Blessing Is A Miracle" << endl;	
	} else if (a == 36){
		cout << a * 3.5 << endl;
		cout << "Thankful, Greatful, Blessed" << endl;
	} else{
		cout << "VALUE-NOT-FOUND" << endl;
	}

	cin.get();
	return 0;
}
