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

void writeData(fstream &data, int position, Movies &inputMovies){
	data.seekp((position - 1)*sizeof(Movies), ios::beg);
	data.write(reinterpret_cast<char*>(&inputMovies),sizeof(Movies));
}

int getDataSize(fstream &data){
	int start, end;
	data.seekg(0, ios::beg);
	start = data.tellg();
	data.seekg(0, ios::end);
	end = data.tellg();
	return (end-start)/sizeof(Movies);
}

Movies readData(fstream &data, int position){
	Movies readMovies;
	data.seekg((position - 1)*sizeof(Movies),ios::beg);
	data.write(reinterpret_cast<char*>(&readMovies),sizeof(Movies));
	return readMovies;
}

void addDataMovies(fstream &data){

	Movies inputMovies, lastMovies;

	int size = getDataSize(data);

	cout << "Data Size : " << size << endl;

	if(size == 0){
		inputMovies.id_number = 1;
	} else {
		lastMovies = readData(data,size);
		cout << "id_number = " << lastMovies.id_number << endl;
		inputMovies.id_number = lastMovies.id_number + 1;
	}


	// readData(data,size)

	cout << "Nama: ";
	getline(cin, inputMovies.NIM);
	cout << "NIM: ";
	getline(cin, inputMovies.nama);
	cout << "Jurusan: ";
	getline(cin, inputMovies.jurusan);


	writeData(data,size+1,inputMovies);
}

void displayDataMovies(fstream &data){
	int size = getDataSize(data);
	Movies showMovies;
	cout << "no.\tid_number.\tActor_Name.\tTitle.\tRelease_Date." << endl;
	for(int i = 1; i<= size; i++){
		showMovies = readData(data,i);
		cout << i << "\t";
		cout << showMovies.id_number << "\t";
		cout << showMovies.actor_name << "\t";
		cout << showMovies.title << "\t";
		cout << showMovies.release_date << endl;
	}
}

void updateRecord(fstream &data){
	int number;
	Movies updateMovies;
	cout << "Choose Movies Number: ";
	cin >> number;
	cin.ignore(numeric_limits<streamsize>::max(),'\n');


	updateMovies = readData(data,number);

	cout << "\n\n choose data: " << endl;
	cout << "Actor Name   : " << updateMovies.actor_name << endl;
	cout << "Title        : " << updateMovies.title << endl;
	cout << "Release Date : " << updateMovies.release_date << endl;

	cout << "\nchange data: " << endl;
	cout << "Actor Name: ";
	getline(cin,updateMovies.actor_name);
	cout << "Title: ";
	getline(cin,updateMovies.title);
	cout << "Release Date: ";
	getline(cin,updateMovies.release_date);


	writeData(data,number,updateMovies);
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
				displayDataMovies(data);
				break;
			case UPDATE:
				cout << "Change Data Movies" << endl;
				displayDataMovies(data);
				updateRecord(data);
				displayDataMovies(data);
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
