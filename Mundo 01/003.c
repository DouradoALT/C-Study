#include <stdio.h>
#include <stdlib.h>

int main () {
    int n1, n2, soma;
    printf("Digite um número: "); scanf("%d", &n1);
    printf("Digite outro número: "); scanf("%d", &n2);

    soma = n1 + n2;

    printf("A soma destes dois números é %d\n", soma);

    return 0;
}