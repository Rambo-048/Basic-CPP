
#include <iostream>

using namespace std;

int main()
{
	int a;

	cout << "Insert Value : ";
	cin >> a;

	switch (a){
		case 5 :
		cout << "SLOW PROGRESS IS BETTER THAN NO PROGRESS" << endl;
			break;
		case 15 :
		cout << "SLOW DOWN AND APPRECIATE THE GOOD THINGS IN LIFE" << endl;
			break;
		case 25 :
		cout << "YOUR ARE SLOWLY GROWING, BUT YOU ARE STILL GROWING AND THAT IS WONDERFUL" << endl;
			break;
		case 35 :
		cout << "THE SIMPLE THINGS ARE ALSO THE MOST EXTRAORDINARY THINGS" << endl;
			break;
		case 45 :
		cout << "PROTECT YOUR PEACE AND KEEP GROWING" << endl;
			break;
		case 55 :
		cout << "BECAUSE I CARRY IT WELL DOESN'T MEAN IT'S NOT HEAVY" << endl;
			break;
	}

	cout << "Finish" << endl;

	cin.get();
	return 0;
}

