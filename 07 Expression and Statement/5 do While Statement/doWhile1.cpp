#include <iostream>

using namespace std;

int main()
{

	int a = 1;

	do {
		cout << "Condition True";
		cout << a << endl;
		a++;
	} while (a < 0); // (1 < 0) -> Condition False	

	cout << "Condition False - VALUE-NOT-FOUND" << endl;
	cout << "Finish" << endl;

	cin.get();
	return 0;
}