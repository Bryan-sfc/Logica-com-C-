#include <iostream>
using namespace std;

int main(){
    float cm;

    cout << "Informe a medida em centimetros\n";
    cin >> cm;

    float polegadas = cm * 2.54;

    cout << "O resultado obtido equivale a " << polegadas << " Polegadas";
    
    return 0;
}