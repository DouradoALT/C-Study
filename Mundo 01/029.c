#include <stdio.h>
#include <stdlib.h>
#define kmo 80
#define taxa 7
//leia velocidade de um carro e multe 7,00 a cada kilometro acima do limite
int main () {
    int km;
    float multa;
    printf("Digite a sua velocidade: "); scanf("%d", &km);

    if (km > 78 && km == 80) {
        printf("Cuidado você está muito proximo de passar do limite de velocidade!!\n");
    }
    
    else if (km > kmo){
        multa = (km - kmo)*taxa; 
        printf("Você ultrapassou o limite de velocidade sua multa é de R$ %.2f\n", multa);
    }

    else if (km < 78) {
        printf("Você está dentro do limite de velocidade :)\n");
    }

    return 0;

}