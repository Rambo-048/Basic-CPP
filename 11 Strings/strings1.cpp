#include <iostream>
#include <string>

using namespace std;

int main()
{
	// char a[5] = {'a','b','c','d','e'};

	string b ("abc");
	cout << b << endl;

	string data;
	cout << "Insert char or string : " << endl;
	cin >> data;
	cout << "Char Insert : " << endl;
	cout << data << endl;

	cin.get();
	return 0;
}