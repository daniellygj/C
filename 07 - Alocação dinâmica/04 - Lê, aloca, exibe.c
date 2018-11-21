#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/* Escreva um programa que leia primeiro os 6 numeros gerados pela loteria e depois os 6 numeros do seu bilhete. O programa entao
compara quantos numeros o jogador acertou. Em seguida, ele aloca espaco para um vetor de tamanho igual a quantidade de numeros corretos
e guarda os numeros corretos nesse vetor. Finalmente, o programa exibe os numeros sorteados e os seus numeros corretos. */

int main(){
    int *vet, loteria[6], bilhete[6], cont = 0;

    printf("Loteria: ");
    for (int c=0; c<6; c++) scanf("%d", &loteria[c]);

    printf("\n\n");

    printf("Bilhete: ");
    for (int c=0; c<6; c++) {
        scanf("%d", &bilhete[c]);
        for (int c2=0; c2<6; c2++){
            if (bilhete[c] == loteria[c2]) cont++;
        }
    }

    printf("\n\n");

    vet = (int*) malloc(cont * sizeof(int));

    for (int c=0; c<6; c++) {
        for (int c2=0; c2<6; c2++){
            if (bilhete[c] == loteria[c2]) vet[c] = bilhete[c];
        }
    }

    printf("Acertos: ");
    for (int c=0; c<cont; c++) printf("%d ", vet[c]);

    free(vet);

}
