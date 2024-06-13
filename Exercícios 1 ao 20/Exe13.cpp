#include <iostream>
using namespace std;

int main(){
    int num;

    cout << "\n" << "Informe um numero \n";
    cin >> num;

    if (num %2 == 0){
        cout << "\n" << "o numero " << num << " eh par";

    } else {
        cout << "\n" << "O numero informado nao eh par";
    }

    return 0;
} 