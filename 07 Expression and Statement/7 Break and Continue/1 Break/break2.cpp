
// Use Break

#include <iostream>

using namespace std;

int main(){

	for (int i = 1; i <= 10; i++){
		cout << i << endl;
		if (i == 5) {
			break;
		}
	}
	cout << "Finish" << endl;

	cin.get();
	return 0;
}

