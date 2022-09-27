//repetidor de numero impares de 1 ate 500 que some eles
#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int n1 = 1, c = 0, cont;
    for (n1 = 1; n1 <= 500; n1 = n1 + 2) {
        if (n1 % 3 == 0) {
            printf("%d, ",n1);
            c = c + n1;
            cont++;
        }
    }
    printf("\n");
    printf("Soma: %d\n", c);
    printf("Quantos números foram solicitados? %d\n", cont);
    return 0;
}

        