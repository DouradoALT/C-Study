#include <stdio.h>
#include <stdlib.h>

int main () {
    int n1, n2, n3;
    printf("Digite o comprimento do primeiro segmento: "); scanf("%d", &n1);
    printf("Digite o comprimento do segundo segmento: "); scanf("%d", &n2);
    printf("Digite o comprimento do terceiro segmento: "); scanf("%d", &n3);

    if (n1 < n2 + n3 && n2 < n1 + n2 && n3 < n1 + n2) {
        if (n1 == n2 && n2 == n3 && n3 == n1) {
            printf("O segmento acima podem forma um triangulo equilatero\n");
        }

        else if (n1 != n2 && n1 != n3 && n2 != n3) {
            printf("O segmento acima pode formar um triangulo escaleno!!\n");
        }

        else {
            printf("O segmento acima pode forma um triangulo isoceles\n");
        }
    }

    else {
        printf("Os segmentos acima nao formam um triangulo\n");
    }

    return 0;
}