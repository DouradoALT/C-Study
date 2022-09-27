#include <stdio.h>
#include <stdlib.h>

int main () {
    float peso, altura, calc;
    printf("Digite seu peso: "); scanf("%f", &peso);
    printf("Digite sua altura: "); scanf("%f", &altura);
    calc = peso/(altura * altura);
    
    if (calc >= 18.5 && calc <= 25) {
        printf("Seu imc é %.1f e você está dentro da faixa do peso ideal\n", calc);
    }

    else if (calc < 18.5) {
        printf("Seu imc é %.1f e você está abaixo do peso ideal\n", calc);
    }

    else {

        if (calc > 25 && calc <= 30) {
            printf("Seu imc é %.1f e você está dentro da faixa do sobrepeso\n", calc );
        }
        
        else if (calc > 30 && calc <= 40) {
            printf("Seu imc é %.1f e você está com obesidade\n", calc);
        }

        else {
            printf("Seu imc é %.1f e você está com obesidade mórbida\n", calc);
        }
    }

    return 0;
}