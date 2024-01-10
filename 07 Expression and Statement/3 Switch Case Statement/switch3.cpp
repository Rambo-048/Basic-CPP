#include <iostream>

using namespace std;

int main()
{
	int a;

	cout << "Insert Value : ";
	cin >> a;

	switch (a){
		case 10 :
		cout << "Value 5 = 10" << endl;
			break;
		case 20 :
		cout << "Value 4 = 20" << endl;
			break;
		case 30 :
		cout << "Value 3 = 30" << endl;
			break;
		case 40 :
		cout << "Value 2 = 40" << endl;
			break;
		case 50 :
		cout << "Value 1 = 50" << endl;
			break;
	}

	cout << "Finish" << endl;

	cin.get();
	return 0;
}