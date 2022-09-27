#include <iostream>
#include <cmath>
using namespace std;

int main  () {

    float co, ca, arm;
    cout<<"Digite o comprimento do cateto oposto: "; cin >> co;
    cout<<"Digite o comprimento do cateto adajacente: "; cin >> ca;
    arm = pow(pow(co, 2) + pow(ca,2), 0.5);

    cout << "O comprimento da sua hipotenusa é " << arm << "\n";
    return 0;
    
}