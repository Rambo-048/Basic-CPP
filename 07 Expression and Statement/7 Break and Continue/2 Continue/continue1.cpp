#include <iostream>

using namespace std;

int main()
{
	cout << "Continue" << endl;
	for (int i = 1; i <= 10; i++){
		if (i == 5) {
			continue;
		}
		cout << i << endl;  
	}
	cout << "Finish" << endl;
	cin.get();
	return 0;
}

