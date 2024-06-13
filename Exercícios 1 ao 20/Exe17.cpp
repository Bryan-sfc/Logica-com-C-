#include <iostream>
using namespace std;

int main(){
    int num;

    cout << "\n" << "Informe um numero inteiro: ";
    cin >> num;

    if (num = num %2 == 0){
        cout << "\n" << "O numero escolhido eh par";
        
    } else {
        cout << "\n" << "Digite apenas numeros pares!";
    }

    return 0;
}