#include <stdio.h>
#include <locale.h>

// Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos

int main(){
    int vet[6], c;

    for(c=0; c<6; c++){
        scanf("%d", &vet[c]);
    }

    for(c=0; c<6; c++){
        printf("%d",
               vet[c]);
    }
    return 0;
}
