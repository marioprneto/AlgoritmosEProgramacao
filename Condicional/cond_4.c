//4. Faça um programa que leia o salário de um trabalhador e o valor da prestação de um
//empréstimo. Se a prestação, for maior que 20% do salário, imprima: “Empréstimo não
//concedido.”, caso contrário, imprima: “Empréstimo concedido.”

#include <stdio.h>

int main(){
    float prestacao, salario;
    printf("Digite seu salario: ");
    scanf("%f",&salario);
    printf("\nDigite a prestacao: ");
    scanf("%f",&prestacao);
    if(prestacao > (0.2 * salario)) {
        printf("Emprestimo nao concedido!");
    } else{
        printf("Emprestimo concedido!");
    }
    return 0;
}