//2. Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os dois
//números forem iguais, imprima a mensagem “Números iguais”.

#include <stdio.h>

int main(){
    int num1, num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    if(num1>num2){
        printf("O numero %d e maior",num1);
    } else if(num2>num1){
        printf("O numero %d e maior",num2);
    } else{
        printf("Sao iguais ;)");
    }
    return 0;
}