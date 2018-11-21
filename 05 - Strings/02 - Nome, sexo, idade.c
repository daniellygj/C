#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>
#define TAM 30

/* Ler nome, sexo e idade. Se o sexo for feminino e a idade menor que 25, imprima o nome da pessoa e a palavra ACEITA. Caso invertido, imrimir NAO ACEITA */

int main(){
    setlocale(LC_ALL,"Portuguese");

    char nome[TAM], sexo[9];
    int idade;

    printf("Nome: ");
    fflush(stdin);
    fgets(nome, TAM, stdin);

    printf("Sexo: ");
    fflush(stdin);
    fgets(sexo, 9, stdin);
    strupr(sexo);

    printf("idade: ");
    scanf("%d", &idade);

    if ((strcmp(sexo, "FEMININO" ) == 0) && idade < 25){
        printf("%s \nACEITA", nome);
    } else {
        printf("\n%s \nNÃO ACEITA",nome);
    }

    return 0;
}
