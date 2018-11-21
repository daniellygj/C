#include <stdio.h>
#include <locale.h>

 // FAÇA UM PROGRAMA QUE RECEBA TRÊS NÚMEROS E MOSTRE-OS EM ORDEM CRESCENTE.
void BubbleSort(int *vet){
    int c, c2, aux;

    for (c=0; c<3 ; c++){
        for (c2=c; c2<3 ;c2++){
            if (vet[c] > vet[c2]){
                aux = vet[c];
                vet[c] = vet[c2];
                vet[c2] = aux;
            }
        }
    }
}

int main(){
    int vet[3], c;

    scanf("%d %d %d", &vet[0], &vet[1], &vet[2]);
    BubbleSort(vet);

    for (c=0; c<3; c++){
        printf("%d ", vet[c]);
    }
}
