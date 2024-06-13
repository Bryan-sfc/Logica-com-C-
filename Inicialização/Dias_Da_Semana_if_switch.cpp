#include <iostream>
using namespace std;

int main(){
    string nome = "";
    string sobrenome = "";
    int idade = 0;
    int DiaDaSemana = 0;

    cout << "\n" << "Digite seu nome: ";
    cin >> nome;

    cout << "\n" << "Digite seu Sobrenome: ";
    cin >> sobrenome;

    cout << "\n" << "Infome Sua Idade: ";
    cin >> idade;

    cout << "\n" << "Informe Um Numero da Semana: " << "\n";
    cout << "1) Domingo \n";
    cout << "2) Segunda \n";
    cout << "3) Terca \n";
    cout << "4) Quarta \n";
    cout << "5) Quinta \n";
    cout << "6) Sexta \n";
    cout << "7) Sabado \n";
    cin >> DiaDaSemana;

    switch (DiaDaSemana){
    case 1:
        cout << "\n" << "Ola " << nome << " " << sobrenome << " Sua idade eh " << idade;
        cout << "\n" << "Seu Dia da Semana eh: Domingo";
        break;
    
    case 2:
        cout << "\n" << "Ola " << nome << " " << sobrenome << " Sua idade eh " << idade;
        cout << "\n" << "Seu Dia da Semana eh: Segunda";
        break;

    case 3:
        cout << "\n" << "Ola " << nome << " " << sobrenome << " Sua idade eh " << idade;
        cout << "\n" << "Seu Dia da Semana eh: Terca";
        break;

    case 4:
        cout << "\n" << "Ola " << nome << " " << sobrenome << " Sua idade eh " << idade;
        cout << "\n" << "Seu Dia da Semana eh: Quarta";
        break;

    case 5:
        cout << "\n" << "Ola " << nome << " " << sobrenome << " Sua idade eh " << idade;
        cout << "\n" << "Seu Dia da Semana eh: Quinta";
        break;

    case 6:
        cout << "\n" << "Ola " << nome << " " << sobrenome << " Sua idade eh " << idade;
        cout << "\n" << "Seu Dia da Semana eh: Sexta";
        break;

    case 7:
        cout << "\n" << "Ola " << nome << " " << sobrenome << " Sua idade eh " << idade;
        cout << "\n" << "Seu Dia da Semana eh: Sabado";
        break;

    default:

        cout << "\n" << "Ola" << nome << ":) Informe um dia de 1 a 7";
        break;
    }

    return 0;
} 