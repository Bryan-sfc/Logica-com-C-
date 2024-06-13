#include <iostream>
using namespace std;

int main(){
    int idade;

    cout << "\n" << "informe uma idade aleatoria \n";
    cin >> idade;

    if (idade >= 0 && idade <=2){
        cout << "\n" << idade << "=Recem-Nascido";

    } else if (idade >= 3 && idade <=12){
        cout << "\n" << idade << "=Crianca";

    } else if (idade >= 12 && idade <= 19){
        cout << "\n" << idade << "=Adolescente";

    } else if (idade >= 20 && idade <= 50){
        cout << "\n" << idade << "=Adulto";

    } else if (idade > 50){
        cout << "\n" << idade << "=Idoso";

    } else 
    
    return 0;
} 