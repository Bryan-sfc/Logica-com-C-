#include <iostream>
using namespace std;

int main(){
    system("cls");

    int n1 , cont = 1;

    cout << "Informe um Numero real: ";
    cin >> n1;

    cout << "Tabuada de " << n1;
    
    while (cont <= 10){
        int resultado = n1 * cont;

        cout << n1 << " x " << cont << " = " <<  resultado << "\n";
        cont ++;
    }
    


    return 0;
}