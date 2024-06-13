#include <iostream>
using namespace std;

int main(){
    float n1 , n2;

    cout << "Digite Dois Numeros \n";
    cin >> n1 >> n2;

    if (n1>n2){
        cout << "\n" << "O Numero " << n1 << " eh maior que " << n2;

    } else if (n1<n2){
    cout << "\n" << "O Numero " << n2 << " eh maior que " << n1;

    } else {
    cout << "Os Numeros Sao iguais!";
    }
   
    return 0;
}