#include <stdio.h>
#include <locale.h>

// Faça um programa que leia um vetor de 10 posicoes e verifique se existem valores iguais e os escreva na tela

int main(){
    int vet[10], c, c2;

    for (c=0; c<10; c++){
        scanf("%d", &vet[c]);
    }

    for (c=0; c<10; c++){
        for (c2=c+1; c2<10; c2++){
            if (vet[c] == vet[c2]){
                printf("%d ", vet[c]);
            }
        }
    }

    return 0;
}
