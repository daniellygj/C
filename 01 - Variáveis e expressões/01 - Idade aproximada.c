#include <stdio.h>
#include <locale.h>

int main(){  // IDADE APROXIMADA
    #define ANO 2018
    setlocale(LC_ALL, "portuguese");

    char name[100];
    int nascimento;

    setbuf(stdin, 0);

    printf("Escreva seu nome: ");
    fgets(name, 100, stdin);
    name[strlen(name)-1] = '\0';

    printf("Informe o ano de seu nascimento; ");
    scanf("%d", &nascimento);

    printf("%s, sua idade aproximada é de %d anos.", name, ANO - nascimento);

}
