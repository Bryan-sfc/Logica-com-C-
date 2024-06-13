#include <iostream>
using namespace std;

int main(){
    string resposta;

    cout << "Esta chovendo? (sim/nao) \n";
    cin >> resposta;

    if (resposta == "sim") {
        cout << "Pegar o guarda-chuva \n";
    } else {
        cout << "Nao precisa de guarda-chuva \n";
        cout << "Va de chinelo \n";
    }

    return 0;
}