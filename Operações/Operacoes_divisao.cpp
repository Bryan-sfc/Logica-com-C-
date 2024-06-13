#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    float numero1;
    float numero2;

    cout << "Informe o Primeiro Número\n";
    cin >> numero1;

    cout << "Informe o Segundo Número\n";
    cin >> numero2;

    float resultado = numero1 / numero2;

    cout << "resultado é: " << resultado << "\n";
}