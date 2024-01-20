#include <iostream>
#include <string>
#include <typeinfo>


using namespace std;


int main(){

	int a = 17;
	string b = "ABCDE";
	double c = 15.2356;
	float d = 14.5f;
	// int e = max(a,d);  // jika ingin mencari max pake contoh 2.

	cout << a << " \ttype: " << typeid(a).name() << endl;
	cout << b << " \ttype: " << typeid(b).name() << endl;
	cout << c << " \ttype: " << typeid(c).name() << endl;
	cout << d << " \ttype: " << typeid(d).name() << endl;

	cin.get();
	return 0;
}