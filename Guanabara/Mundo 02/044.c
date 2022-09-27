#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    float compras, desconto;
    int op;
    printf("Preço das compras: R$ "); scanf("%f", &compras);
    printf("[ 1 ] \tà vista dinheiro/cheque\n[ 2 ] \tà vista cartão\n");
    printf("[ 3 ] \t2x no cartão\n[ 4 ] \t3x ou mais no cartão\n");
    printf("Escolha: "); scanf("%d", &op);

    if (op == 1) {
        desconto = compras - (compras*0.1);
        printf("Ao comprar à vista no dinheiro ou cheque ganha-se 10%% de desconto\nSua compra de R$ %.2f vai custar R$ %.2f\n", compras, desconto);
    }

    else if (op == 2) {
        desconto = compras - (compras*0.05);
        printf("Ao comprar à vista no cartão ganha-se 10%% de desconto\nSua compra de R$ %.2f vai custar R$ %.2f\n", compras, desconto);
    }

    else if (op == 3) { 
        printf("Ao parcelar em 2x no cartão o preço não sofre alteração\nSua compra vai custar R$ %.2f\n", compras);
    }

    else if (op == 4) {
        desconto = compras + (compras*0.2);
        printf("Ao parcelar 3x ou mais no cartão a sua compra sofre um aumento em juros de 20%%\nSua compra de R$ %.2f vai custar agora %.2f.\n", compras, desconto);
    }

    else {
        printf("\nNenhuma das opções selecionadas\n");
    }
    
    return 0;

}
