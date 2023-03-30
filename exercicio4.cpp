#include <iostream>
using namespace std;

int main() {
  float numero, percentual;
  cout << "Digito um numero: " << endl;
  cin >> numero;

  cout << "Digite um percentual desse numero" << endl;
  cin >> percentual;

  percentual /= 100;

  int valorPercentual = numero * percentual;
  cout << "O percentual e " << valorPercentual << endl;
}
