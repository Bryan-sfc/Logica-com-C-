#include <iostream>
using namespace std;

int main(){
    float produto;
    float lucro;

    cout << "\n" << "Informe preco da compra do produto \n";
    cin >> produto;

    cout << "\n" << "Informe a porcentagem do lucro a ser aplicado \n";
    cin >> lucro;

    float prodlucro = (lucro / 100) * produto;

    float promo = prodlucro + produto;

    if ( prodlucro >= 50){
        cout << "\n" << "O produto sera vendido com uma margem muito pequena de lucro! \n"; 
    } else {
        cout << "\n" << "O produto tera lucro! O novo preco sera de R$" << promo << ",00";
    }

    return 0;
}