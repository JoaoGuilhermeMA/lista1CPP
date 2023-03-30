#include <iostream>
using namespace std;

int main() {
  float custoFabrica;
  cout << "Digite o custo de fabrica do carro: " << endl;
  cin >> custoFabrica;

  float perDistribuidor = 0.28 * custoFabrica, impostos = 0.45 * custoFabrica;
  float taxas = perDistribuidor + impostos;
  float custoConsumidor = custoFabrica +  taxas;

  cout << "O custo do consumidor vai ser " << custoConsumidor << " reais" << endl;
}
