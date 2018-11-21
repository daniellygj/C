#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/* Escreva um programa que acumula n valores da sequencia de Fibonacci em uma pilha. */

void Push(int valor, int *pilha, int *topo, int qtd) ;

int main() {
    setlocale(LC_ALL, "portuguese");
    int qtd, topo = -1, *pilha, t1 = 1, t2 = 1, t3;

    printf("Quantos valores da sequencia de Fibonacci você deseja armazenar?");
    scanf("%d", &qtd);

    pilha = (int*) malloc(sizeof(int) * qtd);

    if (qtd >= 2) {
        Push(1, pilha, &topo, qtd);
        Push(1, pilha, &topo, qtd);
    } else if (qtd == 1)
        Push(1, pilha, &topo, qtd);

    for (int i=0; i<qtd; i++) {
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
        Push(t3, pilha, &topo, qtd);
    }

    for (int i=0; i<qtd; i++)
        printf("%d ", pilha[i]);

    return 0;
}


void Push(int valor, int *pilha, int *topo, int qtd) {
    if (*topo <= qtd) {
        *topo += 1;
        pilha[*topo] = valor;
    }
}
