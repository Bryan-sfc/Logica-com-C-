#include <iostream>
using namespace std;

int main(){
    float num;

    cout << "\n" << "Informe um Numero Qualquer:";
    cin >> num;

    if (num > 0){
        cout << "O Numero eh Positivo";

    } else if (num < 0){
        cout << "O Numero eh Negativo";

    } else {
        cout << "O Numero eh Zero!";
    }
    
    return 0;
}