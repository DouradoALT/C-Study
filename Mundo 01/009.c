#include <stdio.h>
#include <stdlib.h>

int main () {
    int n1;
    printf("Digite o número que vc deseja saber a tabuada: ");  scanf("%d", &n1);
    printf("======TABUADA DO N°: %d =========\n", n1);
    
    printf("%d x %d = %d \n", n1, 0, n1*0);
    printf("%d x %d = %d \n", n1, 1, n1*1);
    printf("%d x %d = %d \n", n1, 2, n1*2);
    printf("%d x %d = %d \n", n1, 3, n1*3);
    printf("%d x %d = %d \n", n1, 4, n1*4);
    printf("%d x %d = %d \n", n1, 5, n1*5);
    printf("%d x %d = %d \n", n1, 6, n1*6);
    printf("%d x %d = %d \n", n1, 7, n1*7);
    printf("%d x %d = %d \n", n1, 8, n1*8);
    printf("%d x %d = %d \n", n1, 9, n1*9);
    printf("%d x %d = %d \n\n", n1, 10, n1*10);

    printf("=================================\n");
    //fazer futuramente com um contador
    return 0;
}