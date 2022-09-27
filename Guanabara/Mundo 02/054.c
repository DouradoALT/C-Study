#include <stdio.h>

int main () {
    int anos[9], i=0, menor=0, maior=0, calc, ano=2022;
    for (i=0; i<=9; i++) {
        printf("Digite em qual ano a %d° pessoa nasceu: ", i+1); scanf("%d", &anos[i]);
        calc = ano - anos[i];
        if (calc >= 18) {
            maior = maior + 1;
        }else {
            menor = menor + 1;
        }
    }
    printf("Temos %d pessoas maior de idade e %d pessoas menores de idade\n", maior, menor);
    printf("%d\n", anos[0]);
    return 0;
}