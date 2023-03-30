#include<iostream>

using namespace std;

int main()
{
    int anosFumando, cigarrosDia, cigarrosCarteira;
    float precoCarteira, precoCigarro, quantiaGasta;

    cout << "Voce fuma a quantos anos? " << endl;
    cin >> anosFumando;
    cout << "Quantos cigarros por dia voce fuma?" << endl;
    cin >> cigarrosDia;
    cout << "quantos cigarros vem em uma carteira?" << endl;
    cin >> cigarrosCarteira;
    cout << "Qual o preco de uma carteira?" << endl;
    cin >> precoCarteira;

    precoCigarro = precoCarteira / cigarrosCarteira;
    quantiaGasta = ((anosFumando * 365) * cigarrosDia) * precoCigarro;

    cout << "O preco de um cigarro e de " << precoCigarro << " reais" << endl;
    cout << "Voce gastou ate agora " << quantiaGasta << " reais em cigarros";

}
