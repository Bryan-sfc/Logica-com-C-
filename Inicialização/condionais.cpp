#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int idade;
    string nome;
    string ingresso;

    cout << "\n\n" << "          !Bem-Vindo ao site!          " << "\n\n";

    cout << "Qual o seu nome?\n";
    cin >> nome;

    cout << "Voce possui o ingresso?\n";
    cin >> ingresso;

    cout << "Qual a sua idade\n";
    cin >> idade;

    if ( idade >= 18 && ingresso == "sim") {
        cout << "Ol� " << nome << ", se divirta na festa!(:" << "\n";
    } else{
        cout << "Perd�o " << nome << ", infelizmente voc� n�o poder� participar da festa):" << "\n";
    }

    return 0;
}