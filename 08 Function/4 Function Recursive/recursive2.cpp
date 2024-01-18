#include <iostream>

using namespace std;

// Prototype
int factorial(int n);

int main()
{
	int number, total;
	cout << "Count Factorial from : ";
	cin >> number;


	total = factorial(number);
	cout << "\nValue Factorial : " << total << endl;

	cin.get();
	return 0;
}


int factorial(int n){
	if (n <= 1){
		cout << n;
		return n;
	}else{
		cout << n << "*";
		return n * factorial(n-1);	
	}	
}
