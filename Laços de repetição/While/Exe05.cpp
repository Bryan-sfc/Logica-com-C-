#include <iostream>
using namespace std;

int main(){
    system("cls");
    
    int somatorio = 0, numero = 0;
    while (somatorio <= 10)
    {
        cout << "Digite um Numero: ";
        cin >> numero;
    
    } if (numero %2 == 0){
        somatorio = somatorio + (numero + 2);

    } else {
        somatorio = somatorio + (numero * 2);

    }
    cout << "Total: " << somatorio << "\n";
    return 0;
}