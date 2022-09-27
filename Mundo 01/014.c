#include <stdio.h>
#include <stdlib.h>

int main () {
    float c, f;
    printf("Digite a temperatura em C°: "); scanf("%f", &c);
    f = (c * 1.8) + 32;

    printf("A sua temperatura convertida em Faherenheit é de %.1f\n", f );
    return 0;
}