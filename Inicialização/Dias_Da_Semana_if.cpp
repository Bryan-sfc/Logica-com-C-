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

    if ( DiaDaSemana == 1){
        cout << "\n" << "Ola " << nome << " " << sobrenome << " Sua idade eh " << idade;
        cout << "\n" << "Seu Dia da Semana eh: Domingo";

    } else if ( DiaDaSemana	== 2){
        cout << "\n" << "Ola " << nome << " " << sobrenome << ". Sua idade eh " << idade;
        cout << "\n" << "Seu Dia da Semana eh: Segunda";

    } else if ( DiaDaSemana == 3){
        cout << "\n" << "Ola " << nome << " " << sobrenome << ". Sua idade eh " << idade;
        cout << "\n" << "Seu Dia da Semana eh: Terca";

    } else if ( DiaDaSemana	== 4 ){
        cout << "\n" << "Ola " << nome << " " << sobrenome << ". Sua idade eh " << idade;
        cout << "\n" << "Seu Dia da Semana eh: Quarta"; 
        
    } else if ( DiaDaSemana == 5){
        cout << "\n" << "Ola " << nome << " " << sobrenome << ". Sua idade eh " << idade;
        cout << "\n" << "Seu Dia da Semana eh: Quinta";

    } else if ( DiaDaSemana == 6){
        cout << "\n" << "Ola " << nome << " " << sobrenome << ". Sua idade eh " << idade;
        cout << "\n" << "Seu Dia da Semana eh: Sexta";

    } else if ( DiaDaSemana == 7) {
        cout << "\n" << "Ola " << nome << " " << sobrenome << ". Sua idade eh " << idade;
        cout << "\n" << "Seu Dia da Semana eh: Sabado";

    } else {
        cout << "\n" << "Ola " << nome << ", Informe Um Dos Numeros Acima";
    }

    return 0;
} 