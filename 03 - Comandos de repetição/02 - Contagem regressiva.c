#include <stdio.h>
#include <locale.h>

 /* FACA UM ALGORITMO UTILIZANDO O COMANDO WHILE QUE MOSTRA UMA CONTAGEM REGRESSIVA NA TELA, INICIANDO EM 10 E TERMINANDO EM 0.
MOSTRAR UMA MENSAGEM "FIM!" APOS A CONTAGEM. */

int main(){
    int num = 10;

    while (num >= 0){
        printf("%d\n", num);
        num --;
    }
    printf("\nFIM!");

    return 0;
}
