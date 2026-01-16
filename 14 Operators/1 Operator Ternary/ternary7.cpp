#include <iostream>
#include <string>

using namespace std;

int main() {
  int value;

  // take input from users
  cout << "Insert a value: ";
  cin >> value;

  // ternary operator checks if
  // value is less than 100
  string result = (value <= 100) ? "Condition True" : "Condition False";

  cout << result << endl;

  return 0;
}
