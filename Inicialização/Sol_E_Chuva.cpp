#include <iostream>
using namespace std;

int main(){
    int opcao = 0;

    cout << "\n" << "|Informe Uma Opcao| \n";
    cout << "1) Sol \n";
    cout << "2) Chuva \n";
    cout << "3) Nublado \n";
    cin >> opcao;

    cout << "\n";

    switch ( opcao ){
        case 1:
            cout << "\n" << "Esta Ensolarado \n";
            break;

        case 2:
            cout << "\n" << "Esta chovendo";
            break;

        case 3:
            cout << "\n" << "Esta Um Dia feio e Nublado :(";
            break;

        default:
            cout << "\n" << "Esta Um Dia EStranho";
            break;
    }

    return 0;
}