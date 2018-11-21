#include <stdio.h>
#include <locale.h>

/* ESCREVA UM ALGORITMO QUE LEIA CERTA QUANTIDADE DE NUMEROS E IMPRIMA O MAIOR DELES E QUANTAS VEZES O MAIOR NUMERO FOI LIDO.
A QUANTIDADE DE NUMEROS A SEREM LIDOS DEVE SER FORNECIDA PELO USUARIO */

int main(){
    int qtd, maior, menor, c, num;

    printf("Quantidade de numeros: ");
    scanf("%d", &qtd);

    printf("Numeros: \n");
    for (c=0; c<qtd; c++){
        scanf("%d", &num);

        if (c == 0){
            maior = num;
            menor = num;
        }
        if (num > maior){
            maior = num;
        }
        if (num < menor){
            menor = num;
        }
    }
    printf("Maior: %d\nMenor: %d\n", maior, menor);

    return 0;
}
