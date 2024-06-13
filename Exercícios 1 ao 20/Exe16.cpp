#include <iostream>
using namespace std;

int main(){
    string cargo;
    float salario;

    cout << "\n" << "Qual eh seu cargo? \n";
    cout << "producao/administrativo/diretoria" << "\n";
    cin >> cargo;

    cout << "\n" << "Informe seu salario \n";
    cin >> salario;

    if (cargo == "producao"){
        float novosalario = salario + (salario * 6.5 /100);
        cout << "\n" << "cargo: " << cargo << "\n";
        cout << "Novo salario com 6.5% de aumento: " << novosalario;

    } else if (cargo == "administrativo"){
        float salarionovo = salario + (salario * 7.5 /100);
        cout << "\n" << "cargo: " << cargo << "\n;";
        cout << "Novo salario com 7.5% de aumento: " << salarionovo;

    } else {
        float newsalario = salario + (salario * 12 /100);
        cout << "\n" << "cargo: " << cargo << "\n";
        cout << "Novo salario com 12% de aumento: " << newsalario;
    }

    return 0;
}