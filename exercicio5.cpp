#include <iostream>
using namespace std;

int main() {
  int eventoSegundos;
  cout << "Digite quantos segundos durou o evento: " << endl;
  cin >> eventoSegundos;
  float eventoMinutos = eventoSegundos / 60.0;
  float eventoHoras = eventoSegundos / 3600.0;

  cout << "O tempo do evento gasto em horas foi de " << eventoHoras << " horas"<< endl;
  cout << "O tempo do evento gasto em minutos foi de " << eventoMinutos << " minutos"<< endl;
  cout << "O tempo do evento gasto em segundos foi de " << eventoSegundos << " segundos"<< endl;


}
