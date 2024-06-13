#include <iostream>
using namespace std;

int main(){
    system("cls");

    int numeros[3];

    cout << "\n" << "Digite Um Numero: ";
    cin >> numeros[0];

    cout << "\n" << "Digite Um Numero: ";
    cin >> numeros[1];

    cout << "\n" << "Digite Um Numero: ";
    cin >> numeros[2];

    for (int xpto = 0; xpto < 3; xpto++){
        cout << "Numeros: " << numeros[xpto] << "\n";
    }

    return 0;
}