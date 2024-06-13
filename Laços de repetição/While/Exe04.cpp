#include <iostream>
using namespace std;

int main(){
    system("cls");
    float numero, soma = 0;
    int contador = 0;

    while (soma <= 100){
        cout << "Informe um Numero Ate o Resultado passar de 100: ";
        cin >> numero;

        soma += numero;
        contador++;

    }if(contador > 0){

    cout << "A Soma Dos Numeros eh: " << soma;
    }
    return 0;
}