#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    string NomeUsuario;
    string SobrenomeDoUsuario;
    cout <<"Ol�, seja bem vindo ao pragrama sauda��o\n\n"; 

    cout <<"Qual � o seu nome?\n";
    cin >> NomeUsuario; 

    cout <<"Qual � o seu Sobrenome?\n";
    cin >> SobrenomeDoUsuario;

    cout << "Ol�, " << NomeUsuario << " ";
    cout << SobrenomeDoUsuario << "\n";
}