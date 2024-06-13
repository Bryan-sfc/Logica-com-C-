#include <iostream>
using namespace std;

int main(){
    system("cls");

    cout << "|Tabuada do 1 ao 10| \n";

    int soma;
    for (int tabuada = 1; tabuada <= 10; tabuada++){
        cout << "\n" << "Tabuada do: " << tabuada << "\n";
    
        for (soma = 1; soma <= 10; soma++){
            cout << tabuada << " x " << soma << " = " << (tabuada*soma) << "\n";
        }
    }
    return 0;
}