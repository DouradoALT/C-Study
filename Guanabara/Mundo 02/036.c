/* escreva um programa para aprovar um emprestismo bancário compra de uma casa.
Pergunte o valo da casa, o salário do comprador e em quantos anos ele vai pagar.
A prestação mensal, não pode exceder de 30% do salário do comprador senao o emprestimo
sera negado. */

#include <stdio.h>
#include <stdlib.h>

int main () {
    float salario, valor_casa, porcentagem, negociacao1, anos;

    printf("Digite o valor da casa: "); scanf("%f", &valor_casa);
    printf("Digite o seu salário: "); scanf("%f", &salario);
    printf("Digite em quantos ano você quer pagar a casa: "); scanf("%f", &anos);

    negociacao1 = valor_casa/(anos * 12);
    porcentagem = salario*0.3;

    if (porcentagem >= negociacao1) {
        printf("Para comprar esta casa a prestação é de R$ %.2f e 30%% do seu salário é R$ %f\n", negociacao1, porcentagem);
        printf("Continuar emprestimo ?\n");
    }

    else {
        printf("Para comprar esta casa a prestação é de R$ %.2f e 30%% do seu salário é R$ %.2f\n", negociacao1, porcentagem);
        printf("Não é possivel, pois a prestação desta casa excede 30%% do seu salário !!\n");
    }
    //errei na lógica
    
    return 0;
}