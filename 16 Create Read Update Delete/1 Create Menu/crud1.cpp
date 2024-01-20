#include <iostream>
#include <string>

using namespace std;

int getOption(){
	int input;
	system("clear");

	cout << "\nProgram CRUD Data Movies" << endl;
	cout << "=============================" << endl;
	cout << "1. Add Data Movies" << endl;
	cout << "2. Show Data Movies" << endl;
	cout << "3. Change Data Movies" << endl;
	cout << "4. Delete Data Movies" << endl;
	cout << "5. Finish" << endl;
	cout << "=============================" << endl;
	cout << "Choose [1-5]? : ";
	cin >> input;
	return input;
}



int main(){

	cout << getOption() << endl;

	cin.get();
	return 0;
}