#include <stdio.h>
#include <stdlib.h>
#define ano 2022
int main () {
    int n1, idade;
    printf("Digite seu ano de nascimento: "); scanf("%d", &n1);
    idade = ano - n1;
    printf("O ATLETA tem %d anos", idade);
    if (idade <= 9) {
        printf("\nClassificação: Mirim\n");
    }
    if (idade > 9 && idade <= 14) {
        printf("\nClassificação: Infantil\n");
    }
    else if (idade > 14 && idade <= 19) {
        printf("\nClassificação: Junior\n");
    }
    
    else if (idade > 19) {
        printf("\nClassificação: Sênior\n");
    }
    return 0;
}