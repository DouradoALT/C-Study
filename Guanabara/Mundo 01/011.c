#include <stdio.h>
#include <stdlib.h>

int main () {
    float width, heigth, area, litrosPorArea;
    printf("Digite a largura da sua parede: "); scanf("%f", &width);
    printf("Digite a altura da sua parede: "); scanf("%f", &heigth);

    area = width*heigth;
    litrosPorArea = area/2;
    printf("Sua parede tem dimensão de %.2f x %.2f e a sua area é de %.3f\n", width, heigth, area);
    printf("Para pintar esta parede você precisará de %fL\n", litrosPorArea);
    return 0;
}