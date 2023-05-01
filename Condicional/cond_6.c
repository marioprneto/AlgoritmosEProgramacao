//6. Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
//peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura):
//◦ Homens: (72,7 * h) – 58
//◦ Mulheres: (62,1 * h) – 44,7

#include <stdio.h>

int main(){
    char sexo;
    double altura, pesoIdeal = 0;
    printf("Digite seu sexo h para homem ou m para mulher: ");
    scanf("%c",&sexo);
    printf("\nDigite sua altura: ");
    scanf("%d",&altura);
    if(sexo=='m'){
        pesoIdeal = 62,1*altura -44.7;
    } else{
        pesoIdeal = 72,7 * altura - 58;
    }

    printf("\nSeu peso ideal eh: %.2f",pesoIdeal);
    return 0;
}
