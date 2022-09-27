#include <stdio.h>
#include <stdlib.h>

int main () {
    int n1;
    printf("Digite um número: "); scanf("%d", &n1);
    printf("Analisando este número o seu antecessor é %d e o seu sucessor é %d\n", (n1-1), (n1+1));
    return 0;
}