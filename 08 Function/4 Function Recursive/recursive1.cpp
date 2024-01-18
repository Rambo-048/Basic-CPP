#include <iostream>

using namespace std;

// Recursive Function
int degreeIterasi(int a, int b){
	int total = a;
	for (int i = 1; i < b; i++){
		total = total * a;
	}
	return total;
}

int degreeRekursive(int a, int b){

	if (b <= 1){
		cout << "End From Recursive\n";
		return a;
	}
	cout << "Recursive\n";
	return a * degreeRecursive(a,(b - 1));
}


int main(){
	int a;
	int b;
	cout << "Insert Number   : ";
	cin >> a;
	cout << "Insert Degree   : ";
	cin >> b;
	cout << "Iterasi Total   : " << degreeIterasi(a,b) << endl;

	cout << "Recursive Total : " << degreeRecursive(a,b) << endl;

	cin.get();
	return 0;
}
