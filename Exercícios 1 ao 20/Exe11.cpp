#include <iostream>
using namespace std;

int main(){
    float num;

    cout << "Informe um numero negativo ou positivo \n";
    cin >> num;

    if (num > 0){
        cout << "\n" << "Seu numero eh positivo \n";

    } else if (num < 0){
        cout << "\n" << "Seu numero eh negativo \n";

    } else  {
        cout << "\n" << "Seu numero eh zero";
    }
    

    return 0;
}