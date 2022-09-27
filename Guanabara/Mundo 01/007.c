#include <stdio.h>
#include <stdlib.h>

int main () {
    float n1, n2, media;
    printf("Digite a nota do primeiro semestre: "); scanf("%f", &n1);
    printf("Digite a nota do segundo semestre: "); scanf("%f", &n2);
    media = (n1+n2)/2;

    printf("A media da soma entre %.1f e %.1f é %.1f\n", n1, n2, media);

    return 0;
}