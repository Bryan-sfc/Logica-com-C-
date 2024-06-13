#include <iostream>
using namespace std;

int main(){
    int idade;

    cout << "Informe sua idade\n";
    cin >> idade;

    int idadeMeses = idade * 12; 
    int idadeDias = idade * 365;
    int idadeHoras = idadeDias * 24;
    int idadeMinutos = idadeHoras * 60;

    cout << "Idade em anos: " << idade << "\n";
    cout << "Idade em meses: " << idadeMeses << "\n";
    cout << "Idade em dias: " << idadeDias << "\n";
    cout << "Idade em horas: " << idadeHoras << "\n";
    cout << "Idade em minutos: " << idadeMinutos << "\n";

    return 0;
}