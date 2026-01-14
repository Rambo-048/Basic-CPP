
#include <iostream>

using namespace std;

int main()
{
	int a;

	cout << "Insert Value : ";
	cin >> a;

	switch (a){
		case 10 :
		cout << "TODAY IS A NEW DAY, EVEN IF YOU WERE WRONG YESTERDAY, YOU CAN GET IT RIGHT TODAY" << endl;
			break;
		case 20 :
		cout << "A BAD DAY DOESN'T MEAN A BAD LIFE, TOMORROW ALWAYS BRINGS NEW CHANCE" << endl;
			break;
		case 30 :
		cout << "EVERYDAY IS A CHANCE TO BE BETTER" << endl;
			break;
		case 40 :
		cout << "HAVE A BEAUTIFUL DAY, ENJOY EVERY MOMENT" << endl;
			break;
		case 50 :
		cout << "YOU DON'T HAVE TO FEEL CONSTANTLY HAPPY, YOU JUST HAVE TO REMEMBER THAT TOMORROW IS ALWAYS A BETTER DAY" << endl;
			break;
	}

	cout << "Finish" << endl;

	cin.get();
	return 0;
}


