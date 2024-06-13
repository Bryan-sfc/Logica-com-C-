#include <iostream>
using namespace std;

int main(){
    system("cls");
    float numero, soma = 0;
    int contador = 0;

    cout << "Informe um Numero (Para encerrar, digite um numero negativo): ";
    cin >> numero;

    while (numero >= 0){
        soma += numero;
        contador ++;

        cout << "Informe O numero : "; cin >> numero;
    }
    float media = soma / contador;
    cout << "A Media Dos Numeros eh: " << media;

    return 0;
}