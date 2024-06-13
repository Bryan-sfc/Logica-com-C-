#include <iostream>
using namespace std;

int main(){
    int idade;

    cout << "\n" << "Informe sua idade \n";
    cin >> idade;

    if (idade >= 18){
        cout << "\n" << "Voce eh maior de idade :)";

    } else {
        cout << "\n" << "Voce eh menor de idade :(";
    }

    return 0;
}