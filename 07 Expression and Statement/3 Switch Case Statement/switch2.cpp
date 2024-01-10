#include <iostream>

using namespace std;

int main(){

	int a;

	cout << "Insert Value : ";
	cin >> a;

	switch (a){
		case 3:
		cout << "Found Alphabet - A" << endl;
			break;
		case 5:
		cout << "Found Alphabet - B" << endl;
			break;
		case 7:
		cout << "Found Alphabet - C" << endl;
			break;
		case 9:
		cout << "Found Alphabet - D" << endl;
			break;
		default:
		cout << "VALUE-NOT-FOUND" << endl;
	}

	cin.get();
	return 0;
}