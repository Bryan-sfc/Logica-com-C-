#include <iostream>
using namespace std;

int main(){
    float med1;
    float med2;
    float med3;
    float med4;

    cout << "\n" << "Informe a primeira nota do aluno: ";
    cin >> med1;

    cout << "\n" << "Informe a segunda nota do aluno: ";
    cin >> med2;

    cout << "\n" << "Informe a terceira nota do aluno: ";
    cin >> med3;

    cout << "\n" << "Informe a quarta nota do aluno: ";
    cin >> med4;
    
    float mediatotal = (med1 + med2 + med3 + med4) / 4;

    if (mediatotal >= 7){
        cout << "\n" << "O aluno esta APROVADO";

    } else if (mediatotal < 7 && mediatotal >= 5 ) {
        cout << "\n" << "O aluno esta de RECUPERACAO";

    } else {
        cout << "\n" << "O aluno esta REPROVADO";
    }

    return 0;
}