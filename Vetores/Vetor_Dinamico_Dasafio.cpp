#include <vector>
#include <iostream>
using namespace std;

int main(){
    system("cls");

    vector <string> Nomes;

    for (int i = 0; i < 3; i++){
        string NomeDigitado;

        cout << "Digite Um Nome: ";
        cin >> NomeDigitado;
        Nomes.push_back(NomeDigitado);
    }

    for (int i = 0; i < Nomes.size(); i++){
        cout << "Nome Digitado: " << Nomes[i] << "\n\n";
    }

    return 0;
}