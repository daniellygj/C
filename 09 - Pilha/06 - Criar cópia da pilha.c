#include <stdio.h>
#include <locale.h>

/*  Desenvolva uma operacao para transferir elementos de uma pilha P1 para uma pilha P2.  */

char Pop(char *pilha, int *topo);
void Push(char valor, char *pilha, int *topo);

int main() {
    setlocale(LC_ALL, "portuguese");

    char pilha[6], pilhaCopia[6];
    int topo = -1, topo2 = -1;

    Push('1', pilha, &topo);
    Push('2', pilha, &topo);
    Push('3', pilha, &topo);
    Push('4', pilha, &topo);
    Push('5', pilha, &topo);

    for (int i=0; i<5; i++)
        Push(Pop(pilha, &topo), pilhaCopia,&topo2);

    printf("%s", pilhaCopia);
    return 0;
}

char Pop(char *pilha, int *topo) {
    if (*topo > -1) {
        *topo -= 1;
        return pilha[*topo +1];
    }
}

void Push(char valor, char *pilha, int *topo) {
    if (*topo != 5) {
        *topo += 1;
        pilha[*topo] = valor;
    }
}
