#include <iostream>
#include <string>

using namespace std;


int main(){
	string string_input;

	// getline(cin, variabel)
	cout << "insert string: ";
	getline(cin, string_input);

	cout << "data input : " << string_input << endl;


	// Total char from Input
	int position = 0;
	int total = 0;

	while(true){
		position = string_input.find(" ", position + 1);
		total++;
		if (position < 0){
			break;
		}
	}

	cout << "total char : " << total << endl;
	
	cin.get(); 
	return 0;
}
