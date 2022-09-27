#include <stdio.h>
#include <stdlib.h>

int main () {
    float n1, dolar = 5.06, conversao;
    printf("Digite quantos reais que converterei para dolares: "); scanf("%f", &n1);
    conversao = n1/dolar;
    printf("Atualmente R$ %.2f equivale a U$ %.2f\n", n1, conversao);

    return 0;
}