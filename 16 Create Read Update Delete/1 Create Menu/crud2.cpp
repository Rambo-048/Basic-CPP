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

	int Chosen = getOption();
	char is_continue;
	while(Chosen != 5){
		
		switch(Chosen){
			case 1:
				cout << "Add Data Movies" << endl;
				break;				
			case 2:
				cout << "Show Data Movies" << endl;
				break;
			case 3:
				cout << "Change Data Movies" << endl;
				break;
			case 4:
				cout << "Delete Data Movies" << endl;
				break;
			default:
				cout << "Movies Data Not Found" << endl;
				break;
		}

		Chosen = getOption();
	}

	cout << "End Program" << endl;

	cin.get();
	return 0;
}
