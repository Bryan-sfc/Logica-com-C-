#include <iostream>
using namespace std;

int main(){
    float velocidade;

    cout << "\n" << "Qual a velocodade do carro? \n";
    cin >> velocidade;

    if (velocidade > 80){
        cout << "\n" << "O carro foi multado :( acima de 80 km/h: " << velocidade << "km/h";

    } else {
        cout << "\n" << "O carro nao foi multado ! :)" << velocidade << "km/h";
    }

    return 0;
}