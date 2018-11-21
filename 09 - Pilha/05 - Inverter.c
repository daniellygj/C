#include <stdio.h>
#include <locale.h>

/* Desenvolva uma funcao para inverter a posicao dos elementos de uma pilha P */

int Pop(int *pilha, int *topo);

int main() {
    setlocale(LC_ALL, "portuguese");

    int pilha[] = {1, 2, 3, 4, 5}, topo = 4, saida[5];

    for (int i=0; i<5; i++)
        saida[i] = Pop(pilha, &topo);

    printf("Invertido: ");
    for (int i=0; i<5; i++)
        printf("%d ", saida[i]);

    return 0;
}

int Pop(int *pilha, int *topo) {
        *topo -= 1;
        return pilha[*topo +1];
}

