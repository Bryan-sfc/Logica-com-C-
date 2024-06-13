#include <iostream>
using namespace std;

int main(){
    int num;

    cout << "Informe um numero \n";
    cin >> num;

    if (num %2 == 0){
        cout << "\n" << "Seu numero eh par";

    } else {
        cout << "\n" << "Seu numero eh impar";
    }

    return 0;
}