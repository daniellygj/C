#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*  Faca um programa que leia numeros do teclado e os armazene em um vetor alocado dinamicamente.
O usuario ir digitar uma sequencia de numeros, sem limite de quantidade. Os numeros serao digitados
um a um e, sendo que caso ele deseje encerrar a entrada de dados, ele ira digitar o numero ZERO. Os dados
devem ser armazenados na memoria deste modo

 - Inicie com um vetor de tamanho 10 alocado dinamicamente;
 - Apos, caso o vetor alocado esteja cheio, aloque um novo vetor do tamanho do vetor anterior adicionando
espaco  para mais 10 valores (tamanho N+10, onde N iniciacom 10);
 - Copie os valores ja digitados da area inicial para esta area maior e libere a memoria da area inicial;
 - Repita este procedimento de expandir dinamicamente com mais 10 valores o vetor alocado cada vez que o
mesmo estiver cheio. Assim o vetor ira ser 'expandido' de 10 em 10 valores.

Ao ﬁnal, exiba o vetor lido. N˜ao use a funcao REALLOC. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vet, c=0, c1=1, c2=1, *vet1;

    vet =(int*) calloc(10, sizeof(int));

    do {
        scanf("%d", &vet[c]);

        if (c1 == 10){

            c2++;
            c1 = 0;

            free(vet1);
            vet1 = (int*) calloc (c2*10, sizeof(int));

            for (int i=0; i<(10*(c2-1)); i++) vet1[i] = vet[i];

            free(vet);
            vet = (int*) calloc (c2*10, sizeof(int));

            for (int i=0; i<(10*(c2-1)); i++) vet[i] = vet1[i];
        }

        c++;
        c1++;

    } while (vet[c]);

    printf("\n\n");

    for (int i=1; i<c; i++) printf("%d  ", vet[i]);

    printf("\n");

    free(vet);
    free(vet1);

    return 0;
}
