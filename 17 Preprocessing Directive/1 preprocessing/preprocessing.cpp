#include <iostream>

// Macro
#define PI 3.14159265359; // sifatnya literal atau tidak tersimpan di dalam memori
                          // sama seperti ketika kita menulskan syntax
                          // seperti ini : cout << "nilai PI : " << 3.14159265359 << endl;  


using namespace std;

double pi = 3.14159265359; // data tersimpan di dalam memory
int main(){

	cout << "value PI=" << PI << endl;

	cout << "value pi double: " << pi << endl; 

	cin.get();
	return 0;
}


// Note :
// Pre-processing in C++ means to execute/process the program file before the execution of the main program.
// A # (hash) symbol (All the preprocessor directives in C++ start with the # (hash) symbol).
// A pre-processor instruction after the # (hash) symbol. For example, #include, #define, #ifdef, #elif, #error, #pragma etc.
// Arguments are based on the type of the directive. For example, <iostream> is argument for #include, PI 3.14 are arguments for #define directive.