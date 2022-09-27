//ano bissexto
#include <stdio.h>
#include <stdlib.h>

int main () {
    int ano;
    printf("Digite seu ano: "); scanf("%d", &ano);
    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        printf("O ano %d é Bissexto\n", ano);
    }
    else {
        printf("O ano %d não é Bissexto\n", ano);
    }

    return 0;
}