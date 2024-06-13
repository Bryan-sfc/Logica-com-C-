#include <iostream>
using namespace std;

float somar (float n1, float n2){
    return n1 + n2;
}

float subtrair (float n1, float n2){
    return n1 - n2;
}

float divisao (float n1, float n2){
    return n1 / n2;
}

float multiplicacao (float n1, float n2){
    return n1 * n2;
}

int main(){
    cout << "\n";
    float n1 = 20, n2 = 20, res;

    res = somar(n1,n2);
    cout << "\n" << "Resultado Da Soma eh: " << res << "\n"; 

    res = subtrair(n1,n2);
    cout << "\n" << "Resultado da Subtracao eh: " << res << "\n"; 

    return 0;
}