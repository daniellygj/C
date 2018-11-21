#include <stdio.h>
#include <locale.h>

/*  Faca um programa que receba 6 numeros inteiros e mostre:
 - Os numeros pares digitados;
 - A soma dos numeros pares digitados;
 - Os numeros impares digitados;
 - A quantidade de numeros impares digitados */

#define TAM 6

int main(){
    int vet[TAM], c, somapar=0, contimpar=0;

    for (c=0; c<TAM; c++){
        scanf("%d", &vet[c]);

        if (vet[c] % 2 == 0){
            somapar += vet[c];
        } else {
            contimpar ++;
        }
    }
    printf("\n\nNumero pares:");
    for (c=0; c<TAM; c++){
        if (vet[c] % 2 == 0){
            printf(" %d", vet[c]);
        }
    }

    printf("\n\nNumeros impares:");
    for (c=0; c<TAM; c++){
        if (vet[c] & 2 != 0){
            printf(" %d", vet[c]);
        }
    }

    return 0;
}
