#include <iostream>

using namespace std;

int main()
{
	int n; 

	cout << "Insert Number : ";
	cin >> n;

	cout << "Pattern 5\n";

	for (int i = 1; i <= n; i++){
		for (int j = n; j > i; j--){
			cout << " ";
		}

		// Arti dari k <= (2*i - 1) adalah 
		// 
		//                       1   1   1   1     arti dari deret aritmatika disamping itu adalah 1 dari i1 ke i2 lalu ke i3 itu memiliki nilai beda 1
		//                      --> --> --> -->
		// baris aritmatikanya i1, i2, i3, i4, i5,..,in
		// 
		//                      |   |   |   |   |      
		//                      2   4   6   8   10      nilai ini didapat dari selisih dikalikan baris aritmatika jadi 2 x i1 --> i = 2 x 1 = 2 --> i =2 .. dst. 
		//                      |   |   |   |   | -1  nilai disamping itu maksudnya nilai di tengah di kurangi 1 contohnya : 2-1 = 1, 4-1 = 3, 6-1 = 5, dll.
		// 
		// deret aritmatikanya  1,  3,  5,  7,  9 ,...,n  -----> u1 = 1 , u2 = 1 + 2 x 1, u3 = 1 + 2 x 2, u4 = 1 + 2 x 3, u5 = 1 + 2 x 4,...,dst
		//                       --> --> --> -->
		//                        2   2   2   2    nilai 2 disamping artinya selisih nilai dari 1 ke 3 lalu ke 5, dst.

		for (int k = 1; k <= (2*i - 1); k++){
			cout << "*";
		}
		cout << endl;
	}

	cin.get();
	return 0;
}
