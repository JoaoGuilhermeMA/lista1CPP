#include <iostream>
using namespace std;

int main() {
  float valorComprar;
  int numPrestacao;
  cout << "Digite o valor da sua comprar: " << endl;
  cin >> valorComprar;

  cout << "Quantas prestacoes voce quer? maximo permitido 10" << endl;
  cin >> numPrestacao;

  float valorParcela = valorComprar / numPrestacao;

  cout << "Voce vai pagar " << numPrestacao << " parcelas de valor " << valorParcela << " reais\n";
}
