#include <iostream>
#include <cmath>
#include <iomanip>
#define pi 3.14

using namespace std;
int main () {
    double graus, seno, cosseno, tangente, radianos;
    cout << "Digite seu angulo em graus: "; cin >> graus;

    radianos = pi * (graus/180);
    seno = sin(radianos);
    tangente = tan(radianos);
    cosseno = cos(radianos);

    cout << setprecision(2) << fixed;//puxar formatação de floats
    cout << "Seu angulo tem seno de " << seno << endl;
    cout << "Seu angulo tem cosseno de " << tangente << endl;
    //endl pula linha do C++
    cout << "Seu angulo tem tangente de " << cosseno << endl;

    //como formatar numeros flutuates casas decimais c++
    return 0;
}