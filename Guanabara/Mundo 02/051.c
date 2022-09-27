//leia o contador
//leia o incio

#include <stdio.h>

int main () {
    int i=0, qnt, ini, rz;
    printf("Digite o primeiro termo: "); scanf("%d", &ini);
    printf("Digite a razão: "); scanf("%d", &qnt);
    rz = qnt*10 + ini;
    
    for (i = ini; i < rz; i = i + qnt) {   
        printf("%d, ", i);
    }
    printf("\n");
    return 0;
}