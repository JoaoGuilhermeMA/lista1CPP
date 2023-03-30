#include <iostream>
using namespace std;

int main()
{
    int A, B;
    bool C, D, conjuncao, disjuncao;

    cout << "Digite um valor A" << endl;
    cin >> A;
    cout << "Digite um valor B" << endl;
    cin >> B;

    cout << "A + B = " << A + B << endl;
    cout << "A - B = " << A - B << endl;
    cout << "A x B = " << A * B << endl;
    cout << "A / B = " << A / B << endl;

    cout << "Digite o valor de C e D : (1 verdadeiro / 0 falso)" << endl;
    cin >> C >> D;

    conjuncao = C & D;
    disjuncao = C || D;

    cout << "Negacao dos valores: " << endl;
    cout << "C = " << C << " entao virou: " << !C << endl;
    cout << "D = " << D << " entao virou: " << !D << endl;

    cout << "C & D: " << conjuncao << endl;
    cout << "C ou D: " << disjuncao << endl;


}
