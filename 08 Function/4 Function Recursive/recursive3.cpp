#include <iostream>

using namespace std;

int fibonacci(int n);

int main()
{
	int number, total;
	cout << "Count Fibonacci - : ";
	cin >> number;

	total = fibonacci(number);
	cout << "Total : ";
	cout << total << endl;

	cin.get();
	return 0;
}


int fibonacci(int n){
	cout << "Fibonacci Function : " << n << endl;
	if((n == 0)||(n == 1)){
		return n;
	}else{
		return fibonacci(n-1) + fibonacci(n-2);
	}	
}
