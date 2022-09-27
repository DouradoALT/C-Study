#include <stdio.h>
#include <stdlib.h>
#define ano 2022

int main () {
    int n1, result, certo;
    printf("Digite seu ano de nascimento: "); scanf("%d", &n1);

    result = ano - n1;
    certo = n1 + 18;
    if (result > 18) {
        
        printf("Quem nasceu em %d tem %d anos em %d\n", n1, result, ano);
        printf("Você já deveria ter se alistado há %d ano\n", result - 18);
        printf("Seu alistamento foi em %d.\n", certo);
    }

    else if (result < 18) {
        printf("Quem nasceu em %d tem %d anos em %d\n", n1, result, ano);
        printf("Você já deverá se alistar alistar em %d ano\n", 18 - result);
        printf("Seu alistamento será em %d.\n", certo);
    }

    else if(result == 18) {
        printf("Quem nasceu em %d tem %d anos em %d\n", n1, result, ano);
        printf("Você deve se alistar IMEDIATAMENTE\n");
    }
    return 0;
}