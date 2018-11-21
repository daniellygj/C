#include <stdio.h>
#include <locale.h>

/* Leia um nome e o imprima somente se a primeira letra for "A"(maiuscula ou minuscula) */

 #include <ctype.h>
#define TAM 30

int main(){
    char nome[TAM], temp;

    fgets(nome, TAM, stdin);
    temp =  toupper(nome[0]);

    if (temp == 'A'){
        printf("%s", nome);
    }

    return 0;
}
