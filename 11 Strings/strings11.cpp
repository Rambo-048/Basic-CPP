#include <iostream>
#include <string>

using namespace std;

int main()
{
	// String Compare
	string input;
	string create_string("GLADIATOR");

	while (true){
		cout << "Choose String : ";
		cin >> input;

		if(input == create_string){
			cout << "Condition True !!!" << endl;
			break;
		}
		cout << "Condition False !!!" << endl;
	}

	cout << "End Program" << endl;

	cin.get();
	return 0;
}
