#include <iostream>

using namespace std;

int main()
{
	cout << "Continue" << endl;
	for (int i = 1; i <= 30; i++){
		if (i == 10) {
			continue;
		}
		cout << i << endl;  
	}
	cout << "Finish" << endl;
	cin.get();
	return 0;
}
