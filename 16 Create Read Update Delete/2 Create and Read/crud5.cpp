#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int getOption(){
	int input;
	system ("clear");
	
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

void checkDatabase(fstream &data){

	data.open("data.bin", ios::out | ios::in |ios::binary);

	// check file exist or not
	if (data.is_open()){
		cout << "found database" << endl;
	} else {
		cout << "database not found, create new database" << endl;
		data.close();
		data.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);
	}
}


int main(){

	fstream data;
	
	checkDatabase(data);

	int Chosen = getOption();
	char is_continue;

	enum option{CREATE = 1, READ, UPDATE, DELETE, FINISH};

	while(Chosen != FINISH){
		
		switch(Chosen){
			case CREATE:
				cout << "Add Data Movies" << endl;
				break;				
			case READ:
				cout << "Show Data Movies" << endl;
				break;
			case UPDATE:
				cout << "Change Data Movies" << endl;
				break;
			case DELETE:
				cout << "Delete Data Movies" << endl;
				break;
			default:
				cout << "Movies Data Not Found" << endl;
				break;
		}

		label_continue:

		cout << "Next?(y/n) : ";
		cin >> is_continue;
		if ((is_continue == 'y') | (is_continue == 'Y')){
			Chosen = getOption();
		} else if ((is_continue == 'n') | (is_continue == 'N')){
			break;
		} else {
			goto label_continue;
		}
	
	}

	cout << "End Program" << endl;

	cin.get();
	return 0;
}
