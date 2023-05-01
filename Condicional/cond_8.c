//8. Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
//possui uma taxa diferente de imposto sobre o produto. Faça um programa em que o
//usuário entre com o valor e o estado de destino do produto e o programa retorne o preço
//final do produto acrescido do imposto do estado em que ele será vendido. Se o estado
//digitado não for válido, mostrará uma mensagem de erro.

#include <stdio.h>
#include <string.h>

int main(){
    char *estado;
    float valor;
    printf("\nDigite o estado: ");
    gets(estado);
    printf("Digite o valor do produto: ");
    scanf("%f",&valor);
    if(strcmp(estado, "mg") == 0 || strcmp(estado, "MG") == 0){
        printf("Preco final: %.2f", valor + valor*0.07);
    } else if(strcmp(estado, "ms") == 0 || strcmp(estado, "MS") == 0){
        printf("Preco final: %.2f", valor + valor*0.08);
    } else if(strcmp(estado, "sp") == 0 || strcmp(estado, "SP") == 0){
        printf("Preco final: %.2f", valor + valor*0.12);
    } else if(strcmp(estado, "rj") == 0 || strcmp(estado, "RJ") == 0){
        printf("Preco final: %.2f", valor + valor*0.15);
    } else{
        printf("Erro! Digitado incorretamente.");
    }
    return 0;
}
