#include <iostream>
#include <string>
#include <typeinfo>


using namespace std;


int main(){

	int a = 20;
	string b = "SANCTUARY";
	double c = 30.2365;
	float d = 40.5f;
	// int e = max(a,d);  // jika ingin mencari max pake contoh 2.

	cout << a << " \ttype: " << typeid(a).name() << endl;
	cout << b << " \ttype: " << typeid(b).name() << endl;
	cout << c << " \ttype: " << typeid(c).name() << endl;
	cout << d << " \ttype: " << typeid(d).name() << endl;

	cin.get();
	return 0;
}

