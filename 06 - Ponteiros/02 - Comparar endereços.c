#include <stdio.h>
#include <locale.h>

/* Escreva um programa que contenha duas variaveis inteiras. Compare seus enderecos e exiba o maior endereco. */

int main(){
    int var1=2, var2=2;

    if (&var1 > &var2) {
        printf("var1 %d > %d", &var1, &var2);
    } else {
        printf("var2 %d > %d", &var2, &var1);
    }

    return 0;
}
