#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "Insert Number : ";
	cin >> n;

	cout << "Pattern 1\n";
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= i ; j++){
			cout << "*";	
		}	
		cout << endl;	
	}


	cout << "Pattern 2\n";
	for (int i = 1; i <= n; i++) {
		for (int j = n; j >= i; j--){
			cout << "*";
		}
		cout << endl;
	}


	cin.get();
	return 0;
}
