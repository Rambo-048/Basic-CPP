#include <iostream>

using namespace std;

int main(){

	int a;

	cout << "Insert Value : ";
	cin >> a;

	switch (a){
		case 3:
		cout << "SLOW DOWN AND APPRECIATE THE GOOD THINGS IN LIFE" << endl;
			break;
		case 5:
		cout << "THE SIMPLE THINGS ARE ALSO THE MOST EXTRAORDINARY THINGS" << endl;
			break;
		case 7:
		cout << "YOUR ARE SLOWLY GROWING, BUT YOU ARE STILL GROWING AND THAT IS WONDERFUL" << endl;
			break;
		case 9:
		cout << "SLOW PROGRESS IS BETTER THAN NO PROGRESS" << endl;
			break;
		default:
		cout << "VALUE-NOT-FOUND" << endl;
	}

	cin.get();
	return 0;
}
