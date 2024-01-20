#include <iostream>
#include <string>

using namespace std;

int main() {
  int value;

  // take input from users
  cout << "Insert a value: ";
  cin >> value;

  // ternary operator checks if
  // value is greater than 50
  string result = (value >= 50) ? "Condition True" : "Condition False";

  cout << result << endl;

  return 0;
}