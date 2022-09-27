//tabuada com repetidor
#include <stdio.h>
#include <stdlib.h>

int main () {
    int n1, up;
    printf("Digite o valor da tabuada que você quer: ");
    scanf("%d", &up);

    for (n1 = 0; n1 <=10; n1 = n1 + 1) {
        printf("%d x %d = %d\n", up, n1, up*n1);
    }

    return 0;
}