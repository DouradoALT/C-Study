#include <stdio.h>
#include <stdlib.h>

int main () {
    //programa que leia três número e mostre o maio e o menor
    int n1,n2,n3;
    printf("Digite o numero 1: "); scanf("%d", &n1);
    printf("Digite o numero 2: "); scanf("%d", &n2);
    printf("Digite o numero 3: "); scanf("%d", &n3);


    if (n1 > n2 && n1 > n3) {
        printf("O maior número é %d\n", n1);
        if (n2 > n3) {
            printf("O menor número é %d\n", n3);
        }
        else {
            printf("O menor número é %d\n", n2);
        }
    }

    else if (n2 > n1 && n2 > n3) {
        printf("O maior número é %d\n", n2);
        if (n1 > n3) {
            printf("O menor número é %d\n", n3);
        }
        else {
            printf("O menor número é %d\n", n1);
        }
    }

    else if (n3 > n1 && n3 > n2) {
        printf("O maior número é %d\n", n3);
        if (n1 > n2) {
            printf("O menor número é %d\n", n2);
        }
        else {
            printf("O menor número é %d\n", n1);
        }
    } 

    return 0;
}