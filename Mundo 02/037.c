#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int n1, op, op2=1;
    while (op2==1) {
        printf("\nConversão de números decimais\nEscolha qualquer uma das opções:\n1- \tOctal\n2- \tHexadecimal\nAqui: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                printf("\nDigite um número: "); scanf("%d", &n1);
                printf("O %d número em octal é %o\n", n1, n1);
                printf("Digite [1] para continuar convertendo números ou [0] pra encerrar: "); scanf("%d", &op2);
                if (op2 != 0 && op2 != 1) {
                    printf("Você errou");
                }

                break;
            case 2:
                printf("\nDigite um número: "); scanf("%d", &n1);
                printf("O %d número em octal é %x\n", n1, n1);
                printf("Digite [1] para continuar convertendo números ou [0] pra encerrar: "); scanf("%d", &op2);
                
                break;
            default:
                op2 = 3;
                while (op2 != 1 && op2 != 0) {
                    printf("Esse número existe nas opções!!\n");
                    printf("Digite [1] para tentar novamente ou [0] pra encerrar\nAqui: ");
                    scanf("%d", &op2);
                }
                break;

        }
    }
    
    return 0;
}