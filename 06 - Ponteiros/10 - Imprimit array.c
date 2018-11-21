#include <stdio.h>
#include <locale.h>

/* Crie uma funcao que receba como parametro um array e o imprima. Nao utilize ındices para percorrer o array, apenas aritmetica de ponteiros */


void print(char *v){

    while (*v) printf("%c", *v++);

}

int main(){

    char vet[] = "frase de teste";

    print(vet);

}
