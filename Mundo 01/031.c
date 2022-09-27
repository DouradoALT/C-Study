//0.50 <= 200
// 0.45 > 200

#include <stdio.h>
#include <stdlib.h>

int main () {
    int km;
    float taxa;
    printf("Fale a distancia da sua viagem: "); scanf("%d", &km);

    if (km <= 200) {
        taxa = km*0.5;
        printf("Sua viagem custará R$ %.2f\n", taxa);
    }
    else if (km > 200) {
        taxa = km * 0.45;
        printf("Sua viagem custará R$ %.2f\n", taxa); 
    }

    printf("Tenha uma ótima viagem !!\n");
    return 0;
}