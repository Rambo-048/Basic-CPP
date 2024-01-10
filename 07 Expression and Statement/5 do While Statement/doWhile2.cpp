#include <iostream>

using namespace std;

int main()
{

	int a = 1;

	do {
		cout << "Condition True";
		cout << a << endl;
		a++;		
	} while (a <= 10);

	cout << "Finish" << endl;

	cin.get();
	return 0;
}