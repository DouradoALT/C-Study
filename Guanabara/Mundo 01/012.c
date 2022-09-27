#include <stdio.h>
#include <stdlib.h>

int main () {
    float n1, n2, desconto;
    printf("Digite o preço do produto R$: "); scanf("%f", &n1);
    printf("Digite o valor do desconto em %%: "); scanf("%f", &n2);
    desconto = n1 - (n1*n2/100);

    printf("O produto que custa R$ %.2f agora com o desconto de 5%% vai custar %.2f\n", n1, desconto);
    return 0;
}