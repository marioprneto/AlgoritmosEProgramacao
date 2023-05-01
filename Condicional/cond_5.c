//5. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre: o
//número digitado ao quadrado e raiz quadrada do número digitado.

#include <stdio.h>
#include <math.h>

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    if(num>0){
        printf("\nO numero digitado ao quadrado e: %.2f",pow(num, 2));
        printf("\nA raiz do numero digitado e: %.2f", sqrt(num));
    }
    return 0;
}