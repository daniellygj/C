#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/* Faca um programa que leia um numero N e:
- Crie dinamicamente e leia um vetor de inteiro de N posicoes;
- Leia um numero inteiro X e conte e mostre os multiplos desse numero que existem no vetor. */


int main(){
    int *vet, tam, num, cont = 0;

    printf("tamanho: ");
    scanf("%d", &tam);

    vet = (int*) malloc (tam * sizeof(int));

    printf("Elementos: ");
    for (int c=0; c<tam; c++) scanf("%d", &vet[c]);

    printf("Numero: ");
    scanf("%d", &num);

    for (int c=0; c<tam; c++) if (vet[c] % num == 0) cont++, printf("%d ", vet[c])  ;

    printf("\n%d", cont);

    free(vet);

    return 0;
}
