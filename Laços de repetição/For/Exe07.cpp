#include <iostream>
using namespace std;

int main(){
    system("cls");

    for(int cont = 1; cont <= 10; cont++){
        for (int estrelinha = 1; estrelinha <= cont; estrelinha++){
            cout << " * ";
        }
        cout << "\n";
    }
    return 0;
}