#include <stdio.h>
#include <stdlib.h>

int main () {
    float sal, aum, salfinal;
    printf("Digite o salário do seu empregado R$: "); scanf("%f", &sal);
    printf("Digite o aumento em %% do seu empregado: "); scanf("%f", &aum);
    salfinal = sal + (sal*aum/100);
    printf("O salário final do seu empregado com aumento de %.0f%% é de R$ %.2f\n", aum, salfinal);
    return 0;
}