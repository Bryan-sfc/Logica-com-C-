#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int numero1;
    int numero2;

    cout << "Informe o Primeiro Número\n";
    cin >> numero1;

    cout << "Informe o Segundo Número\n";
    cin >> numero2;

    int resultado = numero1 + numero2;

    cout << "resultado é: " << resultado << "/n";
}