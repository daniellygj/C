#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(){ // ESCOLHE NOME ALEATORIO
    setlocale(LC_ALL, "portuguese");

    char vet[4][100], aleatorio;
    int c;

    printf("Entre com 4 nomes:\n");
    for(c=0; c<4; c++){
        fgets(vet[c], 100, stdin);
        vet[c][strlen(vet[c])-1] = '\0';
    }

    aleatorio = rand() % 5;
    printf("\n%s\n", vet[aleatorio]);
}
