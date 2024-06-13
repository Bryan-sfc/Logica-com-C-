#include <iostream>
using namespace std;

int main(){
    system("cls");
    int N;

    cout << "Informe Um Numero Qualquer: ";
    cin >> N;

    for (int contador = N; contador >= 1; contador--){
        cout << contador << " ";
    }

    return 0;
}