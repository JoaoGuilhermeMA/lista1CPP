#include <iostream>
using namespace std;

int main() {
  float valorDolar, cotacaoDolar;
  cout << "Escreva um valor em dolar: " << endl;
  cin >> valorDolar;

  cout << "Escreva o valor da cotacao do dolar" << endl;
  cin >> cotacaoDolar;

  float valorReal= valorDolar * cotacaoDolar;
  cout << "Voce tem " << valorDolar << " dolares " << endl;
  cout << "Isso da " << valorReal << " reais " << endl;
}
