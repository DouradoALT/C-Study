#include <stdio.h>
#include <stdlib.h>

int main () {
    int n1;
    printf("Digite um número: "); scanf("%d", &n1);
    if (n1%2 == 0) {
        printf("Seu número é par\n");
    }
    else if (n1%2 != 0) {
        printf("Seu número é impar\n");
    }

    return 0;
}