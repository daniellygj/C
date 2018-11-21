#include <stdio.h>
#include <locale.h>
#include <string.h>

/* Uma sequencia de operacoes insercao (I) e eliminacao (E) numa pilha e dita valida se ela tem igual numero de Is e Es e todas as operacoes podem ser
efetuadas na pilha, ou seja, a eliminacao so pode acontecer se a pilha nao estiver vazia. Formule uma regra que permita determinar se uma sequencia (ex: IIEE)
e valida ou nao. */

void Pop(char *pilha, int *topo);
void Push(char valor, char *pilha, int *topo);

int main() {
    setlocale(LC_ALL, "portuguese");
    char pilha[10];
    int topo = -1;

    Pop(pilha, &topo);
    Push('1', pilha, &topo);
    Push('2', pilha, &topo);
    Push('3', pilha, &topo);
    Push('4', pilha, &topo);
    Push('5', pilha, &topo);
    Push('6', pilha, &topo);
    Push('7', pilha, &topo);
    PilhaPop(pilha, &topo);

    return 0;
}

void Pop(char *pilha, int *topo) {
    if (*topo == -1)
        printf("Pilha vazia!\n");
    else {
        printf("O valor '%c' foi removido.\n", pilha[*topo]);
        pilha[*topo] = '-';
        *topo -= 1;
    }
}

void Push(char valor, char *pilha, int *topo) {
    if (*topo == 3)
        printf("Pilha cheia!\n");
    else {
        printf("O valor '%c' foi adicionado.\n", valor);
        *topo += 1;
        pilha[*topo] = valor;
    }
}
