#include <stdio.h>
#include <locale.h>

/* Escreva um algoritmo que leia um numero indeterminado de valores inteiros. O valor 0 (zero) ﬁnaliza a entrada de dados. Para cada valor lido, determinar se ele
e um numero par ou ımpar. Se o numero for par, entao incluı-lo na FILA PAR; caso contrario, incluı-lo na FILA IMPAR. Apos o termino da entrada de dados,
retirar um elemento de cada ﬁla alternadamente (iniciando-se pela FILA IMPAR) ate que ambas as ﬁlas estejam vazias. Se o elemento retirado de uma das ﬁlas for
um valor positivo, entao incluı-lo em uma PILHA; caso contrario, remover um elemento da PILHA. Finalmente, escrever o conteudo da pilha. */

int Pop(int *pilha, int *topo);
int Push(int valor, int *pilha, int *topo);

int main() {
    setlocale(LC_ALL, "portuguese");
    int pilha[100], pilhaPar[100], pilhaImpar[100], topo = -1, topoPar = -1, topoImpar = -1, aux;

    printf("Entre com vários numeros. Digite 0 para encerrar.\n");
    do {
        scanf("%d", &aux);
        if (aux % 2 == 0 && aux != 0)
            Push(aux, pilhaPar, &topoPar);
        else if (aux % 2 != 0 && aux != 0)
            Push(aux, pilhaImpar, &topoImpar);
    } while (aux != 0);

    while (topoPar != -1 || topoImpar != -1) {
        aux = Pop(pilhaImpar, &topoImpar);
        if (aux > -1) Push(aux, pilha, &topo);

        aux = Pop(pilhaPar, &topoPar);
        if (aux > -1) Push(aux, pilha, &topo);
    }

    printf("\n\n");
    for (int i=0; i<= topo; i++)
        printf("%d ", pilha[i]);

    return 0;
}

int Pop(int *pilha, int *topo) {
    if (*topo != -1) {
        *topo -= 1;
        return pilha[*topo +1];
    }
}

int Push(int valor, int *pilha, int *topo) {
    if (*topo != 100) {
        *topo += 1;
        pilha[*topo] = valor;
        return pilha[*topo];
    }
}
