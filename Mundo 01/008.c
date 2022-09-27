#include <stdio.h>
#include <stdlib.h>

int main () {
    float metros;
    printf("Digite quantos metros: "); scanf("%f", &metros);
    printf("%f equivale a %.3fkm\n", metros, metros/1000);
    printf("%f equivale a %.2fhm\n", metros, metros/100);
    printf("%f equivale a %.1fdam\n", metros, metros/10);
    printf("%f equivale a %.0fdm\n", metros, metros*10);
    printf("%f equivale a %.0fcm\n", metros, metros*100);
    printf("%f equivale a %.0fmm\n", metros, metros*1000);

    return 0;
}