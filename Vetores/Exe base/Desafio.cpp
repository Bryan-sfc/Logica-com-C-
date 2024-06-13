#include <iostream>
using namespace std;

int main(){
    system("cls");

    string nomes[5] = {"Eduardo", "Samanta", "Juscelino", "Wesley", "Wanderlley"};
    int idades[5] = {41, 21, 44, 90, 16};

    for (int contador = 0; contador <= 4; contador++)
    {
        cout << "Nome: " << nomes[contador] << "\n";
        cout << "Idade: " << idades[contador] << " Anos" << "\n\n";
    }

    return 0;
}