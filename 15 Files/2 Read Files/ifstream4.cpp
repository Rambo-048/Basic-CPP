#include <iostream>
#include <fstream> //Stream Standar Library --> ofstream, ifstream, fstream
#include <string>

using namespace std;

int main(){

	ifstream myFile;
	string output, buffer;

	bool isData = false;
	int no;
	string word;

	// 3 Mode Write on ifstream
	// ios::in
	// ios::ate = start from the last file
	// ios::binary = read binary file


	myFile.open("data2.txt");
	
	// syntax dibawah digunakan jika kita ingin mengambil seluruh data dari "data.txt".
	while(!isData){
		getline(myFile, buffer);
		output.append("\n" + buffer);
		if(buffer == "data2"){
			isData = true;
		}
	} 

	cout << output << endl;

	
	getline(myFile, buffer);

	cout << buffer << endl;

	int total_data = 0;
	while(!myFile.eof()){
		myFile >> no;
		myFile >> word;

		// cout << "no-> " << no << " word-> " << word << endl;    // if use this syntax --> remove cout << buffer << endl;

		cout << no << "\t" << word << endl;   // different syntax but with the same function
		total_data++;
	}

	cout << "total_data = " << total_data << endl;

	cin.get();
	return 0;
}

