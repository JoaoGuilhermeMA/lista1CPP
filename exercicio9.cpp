#include <iostream>
using namespace std;

int main() {
  int val1, val2, val3;
  cout << "Escreva o valor de val1: " << endl;
  cin >> val1;

  cout << "Escreva o valor de val2: " << endl;
  cin >> val2;

  val3 = val1;
  val1 = val2;
  val2 = val3;

  cout << "O valor de val1 e: " << val1 << endl;
  cout << "O valor de val2 e: " << val2 << endl;
}
