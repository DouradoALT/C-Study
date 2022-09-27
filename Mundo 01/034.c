#include <stdio.h>
#include <stdlib.h>

int main () {
    float salario, aumento;
    printf("Digite o seu salário: "); scanf("%f", &salario);
    if (salario > 5000) {
        aumento = (salario*0.10)+salario;
        printf("Este mês seu salário recebeu um aumento de 10%% foi de R$ %.2f para R$ %.2f\n", salario, aumento);
    }

    else if (salario <= 5000) {
        aumento = (salario*0.15)+salario;
        printf("Este mês seu salário recebeu um aumento de 10%% foi de R$ %.2f para R$ %.2f\n", salario, aumento);
    }

    return 0;
}