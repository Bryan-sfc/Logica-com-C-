#include <iostream>
using namespace std;

int main(){
    system("cls");

    int num1;

    do{
        cout << "\n" << "Informe Um Numero: ";
        cin >> num1;
        
        if(num1 > 0){
            cout << "Seu Numero Eh Positivo! \n";

        } else if (num1 < 0){
            cout << "Seu Numero Eh Negativo! \n";
            
        } else {
            cout << "Seu Numero Eh Zero! \n";

        }
        
    } while (num1 != 0);

    return 0;
}