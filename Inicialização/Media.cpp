#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int numero1;
    int numero2;
    int numero3;

    cout << "Informe a primeira nota\n";
    cin >> numero1;

    cout << "Informe a segunda nota\n";
    cin >> numero2;

    cout << "Informe a terceira nota\n";
    cin >> numero3;

    int resultado =  (numero1 + numero2 + numero3)/3;

    cout << "Nota do aluno: " << resultado << "\n";
}