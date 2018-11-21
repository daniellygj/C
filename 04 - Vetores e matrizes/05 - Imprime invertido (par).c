#include <stdio.h>
#include <locale.h>

 // Crie um programa que leia 6 valores inteiros pares e, em seguida, mostre na tela os valores lidos na ordem inversa

int main(){
    int vet[6], c;

    for (c=0; c<6; c++){
        scanf("%d", &vet[c]);
        while (vet[c] % 2 != 0){
            printf("\nDigite um numero par\n");
            scanf("%d", &vet[c]);
        }
    }

    for (c=5; c>=0; c--){
        printf("%d ", vet[c]);
    }
    return 0;
}
