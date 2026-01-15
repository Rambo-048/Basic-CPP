#include <iostream>
#include <array>

using namespace std;

int main()
{
	array<int,20> value;

	cout << "Show Grafik Value" << endl << endl;

	for(int i = 0; i <= value.size(); i++){
		cout << "Total Value ";
		if(i == 0){
			cout << "0-20  : ";
		}else if(i == 20){
			cout << "400  : ";
		}else{
			cout << i*20 << "-" << (i*20) + 20 << ": ";
		}
		cin >> value[i];
	}


	cout << endl;
	cout << "Grafik value" << endl << endl;

	for(int i = 0; i <= value.size(); i++){
		if(i == 0){
			cout << "0-20  : ";
		}else if(i == 20){
			cout << "400  : ";
		}else{
			cout << i*20 << "-" << (i*20) + 20 << ": ";
		}

		for(int a = 0; a < value[i]; a++){
			cout << "*";
		}
		cout << endl;
	}

	cin.get();
	return 0;
}

