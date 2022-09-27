#include <stdio.h>
#include <stdlib.h>

int main () {
    //60 reais por dia
    //0.15c por km rodado
    float km, taxakm = 0.15, dias, taxadia = 60, calc1, calc2, total;
    printf("Por quantos dias o carro foi alugado: "); scanf("%f", &dias);
    printf("Quantos km foram rodados: "); scanf("%f", &km);

    calc1 = dias*taxadia;
    calc2 = km*taxakm;
    total = calc1 + calc2;

    printf("O preço a se pagar do alguem do carro é de R$ %.2f\n", total);
    return 0;
}