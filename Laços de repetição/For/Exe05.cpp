#include <iostream>
using namespace std;

int main(){
    int n1, n2, somaPares = 0;

    cout << "\n" << "      |Informe Dois numero Reais|\n";
    cout << "O primeiro deve ser menor que o segundo \n";
    cin >> n1 >> n2;

    if (n1 < n2){
        for (int cont = n1; n1 <= cont; cont++){
            if (cont %2 == 0){
                somaPares += cont;
                } 
            }
        cout << "A somas Dos Numeros " << n1 << " e " << n2 << " eh: " << somaPares;

    } else {
        cout << "O primeiro Numero deve ser menor que o segundo Numero :( \n";

    }

    return 0;
}