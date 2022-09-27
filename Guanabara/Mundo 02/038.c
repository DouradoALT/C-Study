#include <stdio.h>
#include <stdlib.h>

int main () {
    float n1, n2;
    printf("Digite o primeiro número: "); scanf("%f", &n1);
    printf("Digite o segundo número: "); scanf("%f", &n2);

    if (n1 > n2) {
        printf("O primeiro número é maior\n");
    }

    else if (n2 > n1) {
        printf("O segundo número é maior!\n");
    }

    else if (n1 == n2) {
        printf("Os dois número são iguais!\n");
    }

    return 0;
}