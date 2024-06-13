#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    string NomeUsuario;
    string SobrenomeDoUsuario;
    cout <<"Olá, seja bem vindo ao pragrama saudação\n\n"; 

    cout <<"Qual é o seu nome?\n";
    cin >> NomeUsuario; 

    cout <<"Qual é o seu Sobrenome?\n";
    cin >> SobrenomeDoUsuario;

    cout << "Olá, " << NomeUsuario << " ";
    cout << SobrenomeDoUsuario << "\n";
}