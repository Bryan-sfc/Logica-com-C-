#include <iostream>
using namespace std;

int main(){
    string nome;
    string cargo;
    float salario;

    cout << "\n" << "Informe seu nome abaixo \n";
    cin >> nome;

    cout << "\n" << "Informe seu cargo de trabalho \n";
    cin >> cargo;

    cout << "\n" << "Informe seu salario \n";
    cin >> salario;

    if (salario <= 1000){
        float promo = salario * 0.10; 
        float novoSalario = promo + salario;
 
        cout << "\n" << "Nome: " << nome << "\n";
        cout << "Cargo: " << cargo << "\n";
        cout << "Novo Salario: " << novoSalario << "\n";    
 
    } else{
        cout << "\n" << "Voce nao tera aumento!\n";
    
        cout << "Nome: " << nome << "\n";
        cout << "Cargo: " << cargo << "\n";
        cout << "Salario: " << salario << "\n";
    }
   
    return 0;
}