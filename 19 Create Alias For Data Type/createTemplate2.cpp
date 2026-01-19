#include <iostream>
#include <string>


using namespace std;


// template ini berfungsi agar penulisan tipe data kita lebih ringkas.
template<typename T>
void print(T data){
	cout << data << endl;
}

template<typename T>
int toInt(T data){
	return int(data);
}

template<typename T, typename U>
T max(T a, U b){
	return (a > b) ? a : b;
}


int main(){

	print(40);
	print(20.4);
	print('c');

	cout << toInt(40.200798) << endl;
	cout << max(40,52.5) << endl;

	print<double>(40.20);
	cout << max<double,int>(7.0,10) << endl;

	cin.get();
	return 0;
}
