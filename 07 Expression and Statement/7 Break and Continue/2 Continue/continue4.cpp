#include <iostream>

using namespace std;

int main()
{
	cout << "Use While Loop\n";
	int i = 0;
	while(i <= 30){
		i++; 
		if (i == 15){
			continue;
		}
		cout << i << endl;
	}
	cout << "Finish" << endl;
	cin.get();
	return 0;
}
