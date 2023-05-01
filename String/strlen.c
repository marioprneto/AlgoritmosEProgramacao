#include <stdio.h>
#include <string.h>

int main(){
    int quantidade;
    char *string;
    printf("Digite a palavra que você quer saber quantas letras tem: ");
    gets(string);
    quantidade = strlen(string);
    printf("A quantidade de letras ali e %d",quantidade);
    return 0;
}