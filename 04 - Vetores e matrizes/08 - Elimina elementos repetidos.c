#include <stdio.h>
#include <locale.h>

 // Leia um vetor com 20 numeros inteiros. Escreva os elementos do vetor eliminando os repetidos

#define MAX 20
#include <stdbool.h>

int main() {
    int vet[MAX], c, c2;

    for(c=0; c<MAX; c++){
         scanf("%d", &vet[c]);
    }

    for(c=0; c<MAX; c++){
        bool repete = true;

         for(c2=0; c2<c; c2++) {
             if (vet[c2] == vet[c]){
                repete = false;
                break;
             }
         }

         if (repete){
             printf("%d ", vet[c]);
         }
    }

    return 0;
}
