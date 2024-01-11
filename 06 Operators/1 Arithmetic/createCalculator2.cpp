#include <iostream>

using namespace std;

int main()
{
	float a,b,total;
	char arithmetic;

	cout << "Welcome to Mini Calculator\n \n";
	
	cout << "Insert Value : ";
	cin >> a;
	cout << "Operator Arithmetic +, -, /, * : ";
	cin >> arithmetic;
	cout << "Insert Value : ";
	cin >> b;

	cout << "\nValue Total : ";
	cout << a << arithmetic << b;

	switch (arithmetic == '+'){
		case true:		
		total = a + b;
	}
	switch (arithmetic == '-'){
		case true:		
		total = a - b;
	}
	switch (arithmetic == '*'){
		case true:		
		total = a * b;
	}
	switch (arithmetic == '/'){
		case true:		
		total = a / b;
	}

	cout << "=" << total << endl;
	cin.get();
	return 0;
}
