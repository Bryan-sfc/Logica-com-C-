#include <iostream>
#include <unistd.h>
using namespace std;

int main(){
    system("cls");

    string SenhaInformada;
    string SenhaSalva;

    cout << "Crie uma Senha: ";
    cin >> SenhaSalva;

    sleep (1);

    cout << "Senha Salva com Sucesso! \n";

    do{
        cout << "\n" << "Informe Sua Senha: ";
        cin >> SenhaInformada;

        sleep (1);

        if( SenhaInformada == SenhaSalva ){
            cout << "\n" << "Senha Correta :)";

        } else {
            cout << "\n" << "Acesso Incompativel, Tente Novamente :( \n";
        }
        
    } while (SenhaInformada != SenhaSalva);
    

    return 0;
}