#include <iostream>
#include <string>
#include <typeinfo>


using namespace std;

// 1. SYNTAX EROR  ---> Kesalahan dalam menulis bahasa seperti kurang dalam memasukan kata maupun simbol (;, typo, dll) 

// 2. LINKING EROR ---> jika penulisan antara prototype dan data yang dimasukan tidak sama atau adanya data yang belum dimasukan

// 3. NON-EROR     ---> Eror yang terjadi saat non Error.

// 4. RUNTIME EROR ---> Eror yang terjadi saat berjalannya program.

int divided(int &num, int &denum){
	if(denum == 0){
		// throw overflow_error("Error: divided zero");	
		throw "Error: Divided Zero";
	}
	return num/denum;
}

int main(){
	int a;
	int b;
	int c;

	while(true){
		cout << "num: ";
		cin >> a;
		cout << "denum: ";
		cin >> b;

		try{
			c = divided(a,b);
			cout << c << endl;
		// }catch(exception &e){
		}catch(const char* e){
			// cout << e.what() << endl;
			cout << e << endl;
		}
		
	}

	cout << "End Program" << endl;
	cin.get();
	return 0;
}


