#include <stdio.h>
#include <locale.h>

// PEÇA AO USUARIO PARA DIGITAR TRES VALORES INTEIROS E IMPRIMA A SOMA DELE

int main(){
    int n1, n2, n3;

    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    printf("soma: %d", n1 + n2 + n3);
}
