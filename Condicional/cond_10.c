//10. Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a tabela a
//seguir, verifique e mostre qual a classificação dessa pessoa.

#include <stdio.h>

int main(){
    float altura, peso;
    printf("Digite a altura da pessoa: ");
    scanf("%f",&altura);
    printf("\nDigite o peso da pessoa: ");
    scanf("%f",&peso);
    if(altura > 1.70){
        if(peso > 90){
            printf("I");
        } else if(peso >=60){
            printf("F");
        } else{
            printf("C");
        }
    } else if (altura >= 1.20){
        if(peso > 90){
            printf("H");
        } else if(peso >=60){
            printf("E");
        } else{
            printf("B");
        }
    } else{
        if(peso > 90){
            printf("G");
        } else if(peso >=60){
            printf("D");
        } else{
            printf("A");
        }
    }
    return 0;
}
