#include <iostream>
using namespace std;

int main(){
    system("cls");
    int contador = 10;
    
    do{
        if (contador == 10){
            cout << "Preparar... \n";

        } else if (contador == 5){
            cout << "Pronto? \n";

        } else if (contador == 0) {
            cout << "Fogo!! \n";

        } else{
            cout << contador << "... \n";
        }
        contador--;
    } while (contador >= 0);

    return 0;
}