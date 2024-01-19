#include <iostream>
#include <array>

using namespace std;

int main()
{
	array<int,10> value;

	cout << "Show Grafik Value" << endl << endl;

	for(int i = 0; i <= value.size(); i++){
		cout << "Total Value ";
		if(i == 0){
			cout << "0-9  : ";
		}else if(i == 10){
			cout << "100  : ";
		}else{
			cout << i*10 << "-" << (i*10) + 9 << ": ";
		}
		cin >> value[i];
	}


	cout << endl;
	cout << "Grafik value" << endl << endl;

	for(int i = 0; i <= value.size(); i++){
		if(i == 0){
			cout << "0-9  : ";
		}else if(i == 10){
			cout << "100  : ";
		}else{
			cout << i*10 << "-" << (i*10) + 9 << ": ";
		}

		for(int a = 0; a < value[i]; a++){
			cout << "*";
		}
		cout << endl;
	}

	cin.get();
	return 0;
}