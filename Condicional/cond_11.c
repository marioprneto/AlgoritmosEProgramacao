//11. Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das
//seguintes médias de acordo com um valor numérico digitado pelo usuário e mostrado na
//tabela a seguir:

#include <stdio.h>

int main(){
    float num1, num2, num3, num4;
    printf("Digite o primeiro numero: ");
    scanf("%f",&num1);
    printf("\nDigite o segundo numero: ");
    scanf("%f",&num2);
    printf("\nDigite o terceiro numero: ");
    scanf("%f",&num3);
    printf("\nDigite o tipo de calculo (1 - Geometrica, 2 - Ponderada, 3 - Harmonica, 4 - Aritmetica): ");
    scanf("%f",&num4);
    if(num4 == 1){
        printf("Resultado: %.2f", num1*num2*num3);
    } else if(num4 == 2){
        printf("Resultado: %.2f", (num1 + 2 * num2 + 3 * num3) / 6);
    } else if(num4 == 3){
        printf("Resultado: %.2f", 1/((1/num1) + (1/num2) + (1/num3)));
    } else{
        printf("Resultado: %.2f", (num1 + num2 + num3)/3);
    }
    return 0;
}
