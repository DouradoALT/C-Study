#include <stdio.h>
#include <stdlib.h>

int main () {
    int n1, i=0, cont = 0;
    //todo contador você precisa declarar
    printf("Digite um número: "); scanf("%d", &n1);

    for (i = 1; i <= n1; i++) {
        
        if (n1 % i == 0) {
            printf("%d, ", i);
            cont++;
        }
        else {
            printf("%d, ", i);
        }
        //aprender a usar cores na linguagem c
    }

    printf("fim\nO número %d foi dividido %d\n", n1, cont);
    return 0;
}