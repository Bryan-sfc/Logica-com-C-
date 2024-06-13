#include <iostream>
using namespace std;

int main(){
    system("cls");

    int numeros[5];
    int contador = 0;
        
    while (contador < 5){
        int numerodigitado = 0;
        cout << "Digite Um Numero: ";
        cin >> numerodigitado;

        if (numerodigitado % 2 == 0){
            numeros[contador] = numerodigitado;
            cout << "Numero Par Guaradado na Posicao " << (contador + 1) << "\n";
            contador++;

        } else {
            cout << "O Numero Nao Eh Par! \n";
        }
    }

    for (int dados = 0; dados < 5; dados++){
        cout << "O NUmero Eh: " << numeros[dados] << "\n";
    }

    return 0;
}