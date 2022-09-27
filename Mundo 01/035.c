#include <stdio.h>
#include <stdlib.h>

int main () {
    float seg1, seg2, seg3;
    printf("Digite o primeiro segmento do triangulo "); scanf("%f", &seg1); 
    printf("Digite o segundo segmento do triangulo "); scanf("%f", &seg2); 
    printf("Digite o terceiro segmento do triangulo "); scanf("%f", &seg3);

    if (seg1 < seg2 + seg3 && seg2 < seg1 + seg3 && seg3 < seg1 + seg2) {
        printf("Os segmentos podem formar um tringulo \n");
    } 

    else {
        printf("Os segmento não podem formar um triângulo!!\n");
    }

    return 0;
}