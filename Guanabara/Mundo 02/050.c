/* #include <stdio.h>
#include <stdlib.h>

int main ( ) {
    //Desenvolva um programa que leia seis números inteiros e mostre a soma apçenas daqueles que forem pares.
    //se o vlaor digitado for ímpar desconsidere-o

    int n1, par, c, cont;
    for (n1 = 1; n1 < 7; n1++) {
        printf("Digite o %d° valor: ", n1); scanf("%d", &par);
        if (par % 3 != 0) {
            cont++;
            c = c + par;
        }
        
    }

    printf("A soma somente do números pares é%d\n", cont);
    return 0;

    //descobrir porque não tá dando certo
} */

//repetidor de numero impares de 1 ate 500 que some eles
/* #include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int n1 = 1, c = 0, cont;
    for (n1 = 1; n1 <= 500; n1 = n1 + 2) {
        if (n1 % 3 == 0) {
            printf("%d, ",n1);
            c = c + n1;
            cont++;
        }
    }
    printf("\n");
    printf("Soma: %d\n", c);
    printf("Quantos números foram solicitados? %d\n", cont);
    return 0;
} */

#include <stdio.h>
#include <stdlib.h>

int main () {
    float c, cont;
    //contador de soma tem que estar no float
    int i = 0, n1;
    //testar duas varíaveis com mesmo nome uma sendo inteiro e outra float
    for (i = 1; i < 7; i++) {
        printf("Digite o %d° número inteiro: ", i); scanf("%d", &n1);
        printf("Seu número é %d\n", n1);

        if (n1 % 2 == 0) {
            c = c + n1;
            cont++;
            //o valor que passa para cá vem divido em seu resto, possivel resposta
            //exatamente isso
        }
    }

    printf("A soma dos seus %.0f números pares é %.0f\n", cont, c);
    return 0;
}