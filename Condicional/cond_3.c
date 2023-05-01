//3. Faça um programa que leia um número inteiro e verifique se esse número é par ou ímpar.

#include <stdio.h>

int main(){
    int num1;
    scanf("%d",&num1);
    if(num1%2==0){
        printf("E par!");
    } else{
        printf("E impar");
    }
    return 0;
}