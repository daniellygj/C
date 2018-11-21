#include <stdio.h>
#include <locale.h>

// Leia um vetor de 10 posicoes e mostre quantos valores pares ele possui.

int main(){
    int vet[10], c, num, par=0;

    for (c=0; c<10; c++){
        scanf("%d", &vet[c]);
    }

    for (c=0; c<10; c++){
        if (vet[c] % 2 == 0){
            par++;
        }
    }

    printf("\n\n%d numeros pares", par);

    return 0;
}
