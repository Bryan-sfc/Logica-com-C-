#include <iostream>
using namespace std;

float somar(float n1 , float n2){
    float r = n1 + n2;
    return r;
}

float subtrair(float n1, float n2){
    return n1 - n2;
}

float multiplicacao(float n1, float n2){
    return n1 * n2;
}

float dividir(float n1, float n2){
    return n1 / n2;
}

int main(){
    float n1, n2, resultado;
    string op;

    cout << "\n\n" << "Bem-vindo ao Programa Calculadora" << "\n\n";

    cout << "Informe o Primeiro Numero: \n";
    cin >> n1;

    cout << "\n" << "Informe o Segundo Numero: \n";
    cin >> n2;

    cout << "\n" << "Informe a operacao: soma, subtracao, multiplicacao ou divisao \n";
    cin >> op;

    if (op == "soma"){
        resultado = somar(n1, n2);
        cout << "\n" << "O resultada da soma eh: " << resultado << "\n";

    } else if (op == "subtracao"){
        resultado = subtrair(n1, n2);
        cout << "\n" << "O esultado da subtracao eh: " << resultado << "\n";

    } else if (op == "multiplicacao"){
        resultado = multiplicacao(n1, n2);
        cout << "\n" << "O esultado da subtracao eh: " << resultado << "\n";
    
    } else if (op == "divisao"){
        resultado = dividir(n1, n2);
        cout << "\n" << "O resultado da subtracao eh: " << resultado << "\n";

    }

    return 0;
}