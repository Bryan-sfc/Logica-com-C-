#include <iostream>
using namespace std;

int main(){
    string nome;
    int salario;
    int codigo;

    cout << "\n" << "|Informe seu nome|" << "\n";
    cin >> nome;

    cout << "\n" << "|Informe seu salario|" << "\n";
    cin >> salario;

    cout << "\n" << "|Informe seu codigo|" << "\n";
    cout << "1/2/3/4/5" << "\n";
    cin >> codigo;

    if (codigo == 1){
        float salario1 = salario + (salario * 50 / 100);
        cout << "\n" << "Nome: " << nome << "\n";
        cout << "Cargo: Escrituario" << "\n";
        cout << "Percentual de aumento: 50%" << "\n";
        cout << "Novo salario: " << salario1;

    } else if (codigo == 2){
        float salario2 = salario + (salario * 35 / 100);
        cout << "\n" << "Nome: " << nome << "\n";
        cout << "Cargo: Secretario" << "\n";
        cout << "Percentual de aumento: 35%" << "\n";
        cout << "Novo salario: " << salario2;

    } else if (codigo == 3){
        float salario3 = salario + (salario * 20 / 100);
        cout << "\n" << "Nome: " << nome << "\n";
        cout << "Cargo: Caixa" << "\n";
        cout << "Percentual de aumento: 20%" << "\n";
        cout << "Novo salario: " << salario3;

    } else if (codigo == 4){
        float salario4 = salario + (salario * 10 / 100);
        cout << "\n" << "Nome: " << nome << "\n";
        cout << "Cargo: Gerente" << "\n";
        cout << "Percentual de aumento: 10%" << "\n";
        cout << "Novo salario: " << salario4;

    } else if (codigo == 5){
        cout << "\n" << "Nome: " << nome;
        cout << "Cargo: Gerente" << "\n";
        cout << "Nao tera aumento." << "\n";
        cout << "Novo salario: " << salario;
    } 
    
    return 0;
}