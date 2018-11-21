#include <stdio.h>
#include <locale.h>

/* Faca um programa que leia 2 valores inteiros e chame uma funcao que receba estas 2 variaveis e troque o seu conteudo, ou seja, esta funcao˜ e chamada passando
 duas variaveis A e B por exemplo e, apos a execucao da funcao, A contera o valor de B e B tera o valor de A. */

void trocar(int *a, int*b){
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;

    printf("A = %d, B = %d\n\n", *a, *b);
}
int main(){
    int a, b;

    scanf("%d %d", &a, &b);

    trocar(&a, &b);

    return 0;
}
