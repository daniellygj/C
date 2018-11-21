#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/* Crie uma funcao para somar dois arrays. Esta funcao deve receber dois arrays e retornar a soma
em um terceiro array. Caso o tamanho do primeiro e segundo array seja diferente, ent˜a funcao retornara
ZERO(0). Caso afuncao seja concluıda com sucesso a mesma deve retornar o valor UM (1). */

int* alocavet(int tam);

int soma(int *vet1, int *vet2, int *vet3, int tam1, int tam2);

int main(){
    int tam1, tam2, *vet1, *vet2, *vet3;

    printf("Tamanho do vetor1: ");
    scanf("%d", &tam1);
    vet1 = alocavet(tam1);

    printf("Tamanho do vetor2: ");
    scanf("%d", &tam2);
    vet2 = alocavet(tam2);

    vet3 = alocavet(tam1);

    printf("\nValores vet1: \n");
    for (int c=0; c<tam1; c++){
        scanf("%d", &vet1[c]);
    }

    printf("\nValores vet2: \n");
    for (int c=0; c<tam2; c++){
        scanf("%d", &vet2[c]);
    }

    if (soma(vet1, vet2, vet3, tam1, tam2)){

        for (int c=0; c<tam1; c++){
            printf("\n%d", *vet3++);

        }
    }

    free(vet1);
    free(vet2);
    free(vet3);

    return 0;
}

int* alocavet(int tam){
    int *aux;
    aux = (int*) malloc(tam * sizeof(int));

    return aux;
}

int soma(int *vet1, int *vet2, int *vet3, int tam1, int tam2){

    if (tam1 == tam2){
        for (int c=0; c<tam1; c++){

            *vet3 = *vet1 + *vet2;

            vet1++;
            vet2++;
            vet3++;
        }

        return 1;
    }

    return 0;
}
