#include <iostream>
using namespace std;

int main(){
    string nome;
    string cargo;
    int salario;

    cout << "Informe seu nome\n";
    cin >> nome;

    cout << "Informe seu cargo\n";
    cin >> cargo;

    cout << "Informe seu salario\n";
    cin >> salario;

    float promo = salario * 0.10;
    
    float novoSalario = promo + salario;

    cout << "Nome: " << nome << "\n";
    cout << "Cargo: " << cargo << "\n";
    cout << "Salario: " << novoSalario << "\n";

    return 0;
}