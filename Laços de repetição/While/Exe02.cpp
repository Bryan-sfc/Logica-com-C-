#include <iostream>
using namespace std;

int main(){
    system("cls");

    int quantidade;
    cout << "Qual a quantidade de Numeros A ser Digitado: ";
    cin >> quantidade;
    
    int num = 0;
    while (num <= quantidade)
    {
        int numero;
        cout << "\n" << "Digite Um numero: ";
        cin >> numero;
        
        if(numero %2 == 0){
            cout << "\n" << "Seu Numero Eh Par: " << numero << "\n";
        }
        num++;
    }
    return 0;
}