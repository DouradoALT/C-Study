#include <stdio.h>
#include <stdlib.h>

int main () {
    float n1;
    printf("Digite um valor com casas decimais: "); scanf("%f", &n1);
    printf("O numero que foi digitado foi %f e sua porção inteira é %.0f\n", n1, n1);
    return 0;

    //conhecer a funçaõ trunc
}