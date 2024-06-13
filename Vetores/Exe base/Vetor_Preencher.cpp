#include <iostream>
using namespace std;

int main(){
    system("cls");

    int nums[3];

    for (int xpto = 0; xpto < 3; xpto++){
        cout << "Informe Alguns Numeros: ";
        cin >> nums[xpto];
    }
    
    for (int resultado = 0; resultado < 3; resultado++){
        cout << "Numeros: " << nums[resultado] << "\n" ;
    }
    
    return 0;
}