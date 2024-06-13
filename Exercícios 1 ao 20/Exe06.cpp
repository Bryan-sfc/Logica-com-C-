#include <iostream>
using namespace std;

int main(){
    float pol;

    cout << "Informe a medida em polegadas\n";
    cin >> pol;

    float cm = pol / 2.54;

    cout << "O resultado obtido equivale a " << cm << " centimetros";
    
    return 0;
}