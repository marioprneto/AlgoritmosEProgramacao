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
