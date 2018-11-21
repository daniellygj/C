#include <stdio.h>
#include <locale.h>

/*  Faca uma funcao que receba uma pilha como argumento e retorne o valor armazenado em seu topo. A funcao deve remover tambem esse elemento. */

int Pop(int *pilha, int *topo) {
    if (*topo != -1) {
        pilha[*topo] = -1;
        *topo -= 1;
        return pilha[*topo +1];
    }
}
