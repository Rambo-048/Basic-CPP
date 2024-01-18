#include <iostream>

using namespace std;

int main()
{
	int n; 

	cout << "Insert Number : ";
	cin >> n;

	cout << "Pattern 6\n";

	for (int i = 1; i <= n; i++){
		for (int j = 1; j < i; j++){
			cout << " ";
		}

		// Rumus yang digunakan pada pola ini adalah (2*1-n)
		// Rumus untuk menghasilkan pola segitiga terbalik.
		for (int k = n; k >= (2*i - n); k--){
			cout << "*";
		}
		cout << endl;
	}

	cin.get();
	return 0;
}



