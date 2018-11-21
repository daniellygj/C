#include <stdio.h>
#include <locale.h>

/* Faca um programa que leia dois valores inteiros e chame uma funcao que receba estes 2 valores de entrada e retorne o maior valor na primeira variavel e o menor
valor na segunda variavel. Escreva o conteudo das 2 variaveis na tela. */

void maiormenor(int *n1, int *n2){
    if (*n1 < *n2){
        int aux = *n1;
        *n1 = *n2;
        *n2 = aux;
    }
}

int main(){
    int n1, n2, *p1, *p2;

    scanf("%d %d", &n1, &n2);

    maiormenor(&n1, &n2);

    printf("%d %d", n1, n2);

    return 0;
}
