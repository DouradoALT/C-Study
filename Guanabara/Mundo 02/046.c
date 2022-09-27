#include <stdio.h>
#include <stdlib.h>

int main ( ){
    //contagem regressiva
    /* int n1 = 0;
    for (n1 = 0; n1 <= 10; n1=n1+1) {
        printf("\n%d\n", n1);

    } */
    /* int n1 = 0;
    while (n1 <= 10) {
        printf("%d\n", n1);
        n1 = n1 + 1;
    } */
    int n1 = 10;
    do {
        printf("[%d]\n", n1);
        n1 = n1 - 1;
    } while (n1 >= 0);
    


}