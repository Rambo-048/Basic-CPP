#include <iostream>
#include <fstream> //Stream Standar Library --> ofstream, ifstream, fstream
#include <string>

using namespace std;

int main(){

	ifstream myFile;
	string output, buffer;

	bool isData = false;
	int no;
	string name;

	// 3 Mode Write on ifstream
	// ios::in
	// ios::ate = start from the last file
	// ios::binary = read binary file


	myFile.open("data.txt");
	
	// syntax dibawah digunakan jika kita ingin mengambil seluruh data dari "data.txt".
	while(!isData){
		getline(myFile, buffer);
		output.append("\n" + buffer);
		if(buffer == "data"){
			isData = true;
		}
	} 

	cout << output << endl;

	
	getline(myFile, buffer);

	cout << buffer << endl;

	int total_data = 0;
	while(!myFile.eof()){
		myFile >> no;
		myFile >> name;

		// cout << "no-> " << no << " name-> " << name << endl;    // if use this syntax --> remove cout << buffer << endl;

		cout << no << "\t" << nama << endl;   // different syntax but with the same function
		total_data++;
	}

	cout << "total_data = " << total_data << endl;

	cin.get();
	return 0;
}