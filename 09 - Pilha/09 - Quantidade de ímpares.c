#include <stdio.h>
#include <locale.h>

/*  Faca uma funcao para retornar o numero de elementos da pilha que possuem valor ımpar.  */

int Pop(int *pilha, int *topo);
void Push(int valor, int *pilha, int *topo);
int retornaQtdImpar(int *pilha, int *topo);

int main() {
    setlocale(LC_ALL, "portuguese");

    int pilha[100], topo = -1, aux;

    printf("Entre com vários numeros. Digite 0 para encerrar.\n");
    do {
        scanf("%d", &aux);
        Push(aux, pilha, &topo);
    } while (aux != 0);

    printf("%d numeros ímpares.\n", retornaQtdImpar(pilha, &topo));

    return 0;
}

int Pop(int *pilha, int *topo) {
    if (*topo != -1) {
        *topo -= 1;
        return pilha[*topo +1];
    }
}

void Push(int valor, int *pilha, int *topo) {
    if (*topo != 100) {
        *topo += 1;
        pilha[*topo] = valor;
    }
}

int retornaQtdImpar(int *pilha, int *topo) {
    int cont = 0, temp;
    while (*topo != -1) {
        temp = Pop(pilha, topo);
        if (temp % 2 != 0) cont ++;
    }

    return cont;
}
