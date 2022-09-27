#include <stdio.h>
#include <stdlib.h>

int main () {
    float n1;
    printf("Digite um número: "); scanf("%f", &n1);

    printf("O dobro de %.0f vale %.0f\n", n1, (n1)*2);
    printf("O triplo de %.1f vale %.1f\n", n1, (n1)*3);
    printf("A raiz quadrada de %.2f é %.2f\n", n1, n1);
    return 0;
    //pesquisar raiz quadrada em c
}