#include <stdio.h>
#include <string.h>

int main(){
    char *var, *var2;
    gets(var);
    gets(var2);
    printf("%s %s", var, var2);
    if (strlen(var) > strlen(var2)) {
        printf("%s tem a string maior", var);
    } else if(strlen(var2) > strlen(var)){
        printf("%s tem a string maior", var2);
    } else{
        printf("mesmas quantidades de letras");
    }
    return 0;
}