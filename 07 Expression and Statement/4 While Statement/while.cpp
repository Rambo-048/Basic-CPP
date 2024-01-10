#include <iostream>

using namespace std;

int main()
{

	int a = 5;

	while (a <= 10) {
		cout << "Condition True";
		cout << a << endl << endl;
		a += 1;
	}

	cout << "Finish" << endl;

	cin.get();
	return 0;
}
