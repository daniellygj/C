#include <stdio.h>
#include <locale.h>

// FACA UM PROGRAMA QUE PECA AO USUARIO PARA DIGITAR 10 VALORES E SOME-OS.
int main(){
    int num, soma = 0, c;

    for (c=0; c<10; c++){
        printf("-> ");
        scanf("%d", &num);
        soma += num;
    }
    printf("%d", soma);

    return 0;
}
