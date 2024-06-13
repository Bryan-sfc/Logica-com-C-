#include <iostream>
using namespace std;

int main(){
    system("cls");

    int nums[5];

    for (int xpto = 0; xpto < 5; xpto++){
        cout << "Informe Alguns Numeros: ";
        cin >> nums[xpto];
    }
    cout << "--------------------- \n";
    cout << "Numeros Digitados: ";

    for (int resultado = 0; resultado < 5; resultado++){
        cout << nums[resultado] << " ";
    }
    cout << "\n" << "--------------------- \n";

    return 0;
}