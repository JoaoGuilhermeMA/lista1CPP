#include<iostream>

using namespace std;

int main()
{
    int idadeAno, idadeMes, idadeDia, totalDias;

    cout << "digite sua idade em anos" << endl;
    cin >> idadeAno;
    cout << "digite sua idade em meses" << endl;
    cin >> idadeMes;
    cout << "digite sua idade em dias" << endl;
    cin >> idadeDia;

    totalDias = (idadeAno*365) + (idadeMes*30) + idadeDia;

    cout << "A sua idade em dias e: " << totalDias << " dias";
}
