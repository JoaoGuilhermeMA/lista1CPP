#include <iostream>
using namespace std;

int main()
{
  int eventoSegundos, horas, minutos, resto;
  cout << "Digite quantos segundos durou o evento: " << endl;
  cin >> eventoSegundos;

  horas = eventoSegundos / 3600;
  resto = eventoSegundos % 3600;
  minutos = resto / 60;
  resto = resto % 60;

  cout << "O evento durou " << horas << " horas " << minutos << " minutos e " << resto << " segundos" << endl;
}
