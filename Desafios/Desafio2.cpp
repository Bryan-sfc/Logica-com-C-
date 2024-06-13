#include <iostream>
using namespace std;

void idade(){
    int Anoatual, AnoNasc;

    cout << "Informe Seu Ano De Nascimento: ";
    cin >> AnoNasc;

    cout << "\n" << "Informe O ano atual: ";
    cin >> Anoatual;

    int idade = Anoatual - AnoNasc;
    int idadesemanas = idade * 4 * 12;

    cout << "\n" << "Sua Idade eh: " << idade << " Anos \n";
    cout << "Sua Idade Em Semanas eh: " << idadesemanas;
}

void centimentros(){
    int cm;

    cout << "\n" << "Informe Os Centimetros: ";
    cin >> cm;

    cout << "\n" << "Os Centimetros Informados Sao: " << cm << "cm";
}

void polegadas(){
    int cm;

    cout << "Informe a medida em centimetros\n";
    cin >> cm;

    float polegadas = cm * 2.54;

    cout << "Os Centimetros obtidos equivalem a: " << polegadas << " Polegadas";
}

void IMC(){
    float altura, peso;

    cout << "Informe sua altura: ";
    cin >> altura;

    cout << "Informe seu peso: ";                                  
    cin >> peso;
    
    float IMC = peso / (altura * altura);

    cout << "Seu IMC eh: " << IMC;
}

int main(){

    system	("cls");

    int opcao;

    cout << "\n\n";

    cout << "-------------------------------" << "\n";
    cout << "|                             |" << "\n";
    cout << "|    Bem Vindo Ao Programa    |" << "\n";
    cout << "|             Dos             |" << "\n";
    cout << "|          Exercicios         |" << "\n";
    cout << "|                             |" << "\n";
    cout << "------------------------------ " << "\n\n";

    cout << "-------------------------------" << "\n";
    cout << "|       |Menu de Opcoes|      |" << "\n";
    cout << "|                             |" << "\n";
    cout << "|      -----------------      |" << "\n";
    cout << "|     | 1) Idade        |     |" << "\n";
    cout << "|     | 2) Centimentros |     |" << "\n";
    cout << "|     | 3) Polegadas    |     |" << "\n";
    cout << "|     | 4) Imc          |     |" << "\n";
    cout << "|      -----------------      |" << "\n";
    cout << "|                             |" << "\n";
    cout << "-------------------------------" << "\n";

    cout << "\n" << "|Escolha uma opcao|> ";
    cin >> opcao;

    switch (opcao){
        case 1:
            idade();
        break;

        case 2:
            centimentros();
        break;

        case 3:
            polegadas();
        break;

        case 4:
            IMC();
        break;

        default:
            cout << "Opcao Valida!";
        break;
    }

    return 0;
}