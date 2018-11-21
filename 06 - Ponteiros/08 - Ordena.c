#include <stdio.h>
#include <locale.h>

/* Faca um programa que leia tres valores inteiros e chame uma funcao que receba estes 3
valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variavel, o
segundo menor valor na variavel do meio, e o maior valor na ultima vari ´ avel. A funcao deve
retornar o valor 1 se os tres valores forem iguais e 0 se existirem valores diferentes.Exibir os
valores ordenados na tela. */

#include <stdbool.h>

void ordenar(int *n1, int *n2, int *n3){
    int aux;
    bool troca = false;

    if (*n2 < *n1){
        aux = *n2;
        *n2 = *n1;
        *n1 = aux;

        troca = true;
    }

    if (*n3 < *n1){
        aux = *n3;
        *n3 = *n1;
        *n1 = aux;

        troca = true;
    }

    if (*n3 < *n2){
        aux = *n3;
        *n3 = *n2;
        *n2 = aux;

        troca = true;
    }

    if (!troca){
        printf("\n0\n");
    } else {
        printf("\n1\n%d %d %d", *n1, *n2, *n3);
    }

}

int main(){
    int n1, n2, n3;

    scanf("%d %d %d", &n1, &n2, &n3);
    ordenar(&n1, &n2, &n3);


    return 0;
}
