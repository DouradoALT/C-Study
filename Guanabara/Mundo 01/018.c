/* #include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265358979323846

int main () {
    
    double radianos, seno, cosseno, tangente, passe, grau;
    
    printf("== Calculo seno cosseno tangente ===\n");
    printf("Digite seu angulo em graus: "); scanf("%lf", &grau);

    passe = grau;
    radianos = PI * (passe/180);
    seno = sin(radianos);
    cosseno = cos(radianos);
    tangente = tan(radianos);

    printf("O seno do angulo é %lf\n", seno);
    printf("O cosseno do angulo é %lf\n", cosseno);
    printf("O tangente do angulo é %lf\n", tangente);
    return 0;
} */