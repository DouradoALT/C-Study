#include <stdio.h>
#include <stdlib.h>

int main () {
    int i = 0;
    char nome[10];
    printf("Digite seu nome: "); scanf("%s", nome);
    for(i=10; i >= 0; i--) {
        printf("%c", nome[i]);
    }
    printf("\n");
    return 0;

    //é ou não é palindromo continuação
}