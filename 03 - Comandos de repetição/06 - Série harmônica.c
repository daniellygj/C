#include <stdio.h>
#include <locale.h>

/* EM MATEMATICA,O NUMERO HARMÔNICO DESIGNADO POR H(N) DEFINE-SE COMO SENDO A SOMA DA SERIE HARMONICA:
H(N) = 1 + 1/2 + 1/3 + 1/4 + ... + 1/N
FACA UM PROGRAMA QUE LEIA UM VALOR N INTEIRO E POSITIVO E APRESENTE O VALOR DE H(N). */

int main(){
    int num, c;
    float h = 0;

    scanf("%d", &num);
    while (num < 0){
        printf("Digite um numero positivo: ");
        scanf("%d", &num);
    }

    for(c=num; c >= 1; c--){
        h += 1.0 / c;
    }

    printf("%.2f", h);

    return 0;
}
