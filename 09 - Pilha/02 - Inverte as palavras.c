#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <string.h>

/* Escreva um algoritmo, usando uma Pilha, que inverte as letras de cada palavra de um texto terminado por ponto (.) preservando a ordem das palavras. Por
exemplo, dado o texto: ESTE EXERCICIO E MUITO FACIL. A saıda deve ser: ETSE OICICREXE E OTIUM LICAF */

char Pop(char *pilha, int *topo);
void Push(char valor, char *pilha, int *topo);

int main() {
    setlocale(LC_ALL, "portuguese");

    char pilha[100], aux, saida[100];
    int topo = -1, i = 0;

    do {
        aux = getche();

        if (aux != ' ' && aux != '.') {
            Push(aux, pilha, &topo);
        } else {
            while (topo > -1)  {
                saida[i++] = Pop(pilha, &topo);
            }
        saida[i++] = ' ';
        }
        if (aux == ' ') aux = '-';

    } while (aux != '.');

    saida[i] = '\0';

    printf("\n%s\n", saida);

    return 0;
}

char Pop(char *pilha, int *topo) {
        if (*topo == -1)
            printf("Pilha vazia!\n");
        else {
            *topo -= 1;
            return pilha[*topo +1];
        }
}

void Push(char valor, char *pilha, int *topo) {
        if (*topo == 100)
            printf("Pilha cheia!\n");
        else {
            *topo += 1;
            pilha[*topo] = valor;
        }
}
