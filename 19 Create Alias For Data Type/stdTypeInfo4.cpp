#include <iostream>
#include <string>
#include <typeinfo>


using namespace std;

template<typename T, typename U>
auto max(T a, U b){
	return (a > b) ? T(a) : U(b);
}

int main(){

	int a = 20;
	string b = "CELESTIAL";
	double c = 30.2365;
	float d = 40.5f;
	auto e = max(c,a);

	cout << a << " \ttype: " << typeid(a).name() << endl;
	cout << b << " \ttype: " << typeid(b).name() << endl;
	cout << c << " \ttype: " << typeid(c).name() << endl;
	cout << d << " \ttype: " << typeid(d).name() << endl;
	cout << e << " \ttype: " << typeid(e).name() << endl;




	cin.get();
	return 0;
}

