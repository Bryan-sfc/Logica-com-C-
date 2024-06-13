#include <iostream>
using namespace std;

int main(){
    string nome;
    float altura;
    float peso;

    cout << "Informe seu nome\n";
    cin >> nome;

    cout << "Informe sua altura\n";
    cin >> altura;

    cout << "Informe seu peso\n";                                  
    cin >> peso;
    
    int IMC = peso / (altura * altura);

    cout << "Nome: " << nome << "\n";
    cout << "Seu IMC eh: " << IMC << "\n";

    return 0;
}