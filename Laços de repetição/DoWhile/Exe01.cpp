#include <iostream>
using namespace std;

int main(){
    system("cls");
    int num = 0;

    cout << "Informe Um Numero Real Inteiro: " << "\n";
    cin >> num;

    cout << "Tabuada de: " << num << "\n";

    int contador = 1;
    do{
        cout << num << " X " << contador << " = " << (num*contador) << "\n";
        contador++;
    } while (contador <= 10); 
    
    return 0;
}