#include <stdio.h>
#include <locale.h>

/* Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereco
de cada posicao desse array. */

int main(){
    setlocale(LC_ALL, "portuguese");
    float vet[10];

    for (int c=0; c<10; c++){
        printf("posição: %d -> endereço: %d\n", c, &vet[c]);
    }
}
