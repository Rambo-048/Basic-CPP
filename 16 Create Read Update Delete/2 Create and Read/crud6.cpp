#include <iostream>
#include <fstream>
#include <string>
#include <limits>  // need include limits, so numeric_limits can running 


using namespace std;

struct Movies {
	int id_number;
	string actor_name;
	string title;
	string release_date;
};



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
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	return input;
};

void checkDatabase(fstream &data){

	data.open("data.bin", ios::out | ios::in |ios::binary);

	// check file exist or not
	if (data.is_open()){
		cout << "database found" << endl;
	} else {
		cout << "database not found, create new database" << endl;
		data.close();
		data.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);
	}
};


void addDataMovies(fstream &data){

	Movies inputMovies;

	inputMovies.id_number = 1;
	cout << "Actor Name: ";
	getline(cin, inputMovies.actor_name);
	cout << "Title: ";
	getline(cin, inputMovies.title);
	cout << "Release Date: ";
	getline(cin, inputMovies.release_date);

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
				addDataMovies(data);
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
