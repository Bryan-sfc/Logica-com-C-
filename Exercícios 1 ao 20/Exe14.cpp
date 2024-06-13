#include <iostream>
using namespace std;

int main(){
    int num01;
    int num02;

    cout << "\n" << "Informe o primeiro numero \n";
    cin >> num01;

    cout << "\n" << "Informe o segundo numero \n";
    cin >> num02;

    if (num01 > num02){
        cout << "O numero " << num01 << " eh maior que o numero " << num02;

    } else if (num01 == num02) {
        cout << "Os numeros sao iguais!";

    } else {
        cout << "O numero " << num02 << " eh maior que o numero " << num01;
    }

    return 0;
}