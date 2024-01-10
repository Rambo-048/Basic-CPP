#include <iostream>

using namespace std;

int main()
{
	int a;
	cout << "Insert Value : ";
	cin >> a;

	if(a == 10) {
		cout << "Good Job" << endl;
	} else if(a == 20) {
		cout << "Okay" << endl;
	} else if (a == 30) {
		cout << "Try Again.." << endl; 
	} else {
		cout << "VALUE-NOT-FOUND" << endl;
	}

	cin.get();
	return 0;
}
