#include <iostream>

using namespace std;

int main()
{
	// Compound
	cout << "Compound" << endl;
	int total = 0;
	for (int i = 1; i <= 10; i++){
		total += i;
		cout << i << " || " << total << endl;
	}

	cin.get();
	return 0;
}