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

	print(5);
	print(5.8);
	print('c');

	cout << toInt(10.200898) << endl;
	cout << max(10,103.5) << endl;

	print<double>(10.15);
	cout << max<double,int>(11.1,12) << endl;

	cin.get();
	return 0;
}

