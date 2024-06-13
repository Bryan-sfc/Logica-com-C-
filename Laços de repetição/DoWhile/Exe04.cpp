#include <iostream>
using namespace std;

int main(){
    system("cls");

    int num;
    int soma = 0;
    int contador;

    do{
        cout << "Informe Um Numero: ";
        cin >> num;
    
        if (num > 0){
            soma += num;
            contador++;
        }

    } while (num > 0);

    if(contador > 0){
        int media = soma/contador;
        cout << "A Media Eh De: " << media;
    }
    
    return 0;
}