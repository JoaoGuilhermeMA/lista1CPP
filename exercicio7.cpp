#include <iostream>
using namespace std;

int main() {
  float tempCelsius;
  cout << "Digite uma temperatura em celsius: " << endl;
  cin >> tempCelsius;

  float tempFahrenheit = (9 * tempCelsius + 160) / 5;

  cout << "A temperatura em celscius e: " << tempCelsius << endl;
  cout << "A temperatura em fahrenheit e: " << tempFahrenheit << endl;
}
