#include <iostream>
using namespace std;

int main(){
    float base , altura;

    cout << "\n" << "Informe a base a altura de um triangulo \n";
    cin >> base >> altura;

    float area = (base * altura) / 2;

    cout << "\n" << "A area do triangulo eh: " << area;

    return 0;
}