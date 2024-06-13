#include <iostream>
using namespace std;

int main(){
    string NomeFuncionario;
    float Salario;

    cout << "\n" << "Informe o nome do Funcionario: \n";
    cin >> NomeFuncionario;

    cout << "\n" << "Informe o salario do funionario: \n";
    cin >> Salario;

    if (Salario < 500){
        float promo = Salario * 0.30; 
        float novoSalario = promo + Salario;

        cout << "\n" << "Ola " << NomeFuncionario << ", seu novo salario sera de: R$" << novoSalario << ",00 !";
    } else {
        cout << "\n" << "Ola " << NomeFuncionario << ", Voce nao tera acesso ao novo salario!";
    }

    return 0;
}