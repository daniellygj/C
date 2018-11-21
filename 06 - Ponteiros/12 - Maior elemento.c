#include <stdio.h>
#include <locale.h>

/* Escreva uma funcao que aceite como parametro um array de inteiros com N valores,
e determina o maior elemento do array e o numero de vezes que este elemento ocorreu no
array. Por exemplo, para um array com os seguintes elementos: 5, 2, 15, 3, 7, 15, 8, 6, 15,
a funcao deve retorna para o programa que a chamou o valor 15 e o n ˜ umero 3 (indicando que o
numero 15 ocorreu 3 vezes). */

#define TAM 3

void maior(int* vet){

    int maior = vet[0], cont = 0;

    for (int c=0; c<TAM; c++){
        if (vet[c] > maior){
            maior = vet[c];
        }
    }

    for (int c=0; c<TAM; c++){
        if (vet[c] == maior){
            cont ++;
        }
    }

    printf("%d %d", maior, cont);

}

int main(){

    int vet[TAM];

    for (int c=0; c<TAM; c++){
        scanf("%d", &vet[c]);
    }

    maior(vet);

}
