#include <iostream>

using namespace std;

int main()
{
	cout << "Use While Loop\n";
	int i = 0;
	while(i <= 10){
		i++; 
		if (i == 5){
			continue;
		}
		cout << i << endl;
	}
	cout << "Finish" << endl;
	cin.get();
	return 0;
}