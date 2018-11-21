#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/* FACA UM PROGRAMA QUE GERA UM NUMERO ALEATORIO DE 1 A 1000. O USUARIO DEVE TENTAR ACERTAR QUAL O NUMERO FOI GERADO,
A CADA TENTATIVA O PROGRAMA DEVERA INFORMAR SE O CHUTE E MENOR OU MAIOR QUE O NUMERO GERADO. O PROGRAMA ACABA QUANDO O
USUARIO ACERTA O NUMERO GERADO. O PROGRAMA DEVE INFORMAR EM QUANTAS TENTATIVAS O NUMERO FOI DESCOBERTO. */

int main(){
    unsigned int tentativas=0, num, numpc;

    numpc =  rand() % 1000;
    scanf("%d", &num);

    do {
        tentativas ++;
        if (num > numpc){
            printf("Menos\n");
        } else {
            printf("Mais\n");
        }
        scanf("%d", &num);
    } while (num != numpc);

    printf("\nTentativas: %d", tentativas);
}
