#include <iostream>
using namespace std;

int main(){
    int ano_nasc;
    int ano_atual;

    cout << "Informe o ano atual\n";
    cin >> ano_atual;

    cout << "Informe seu ano de nascimento\n";
    cin >> ano_nasc;

    int idade = ano_atual - ano_nasc;
    cout << "Idade: " << idade << " Anos \n";

    int idadeSemanas = idade * 48;
    cout << "Semanas de vida: " << idadeSemanas << " Semanas \n";

    return 0;
}