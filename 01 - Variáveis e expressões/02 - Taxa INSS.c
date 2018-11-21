#include <stdio.h>
#include <locale.h>
#include <string.h>

#define TAXA 0.085

int main(){ // TAXA INSS
    char name[100];
    float base, liquido, inss;

    printf("Informe seu nome: ");
    fgets(name, 100, stdin);
    name[strlen(name)-1] = '\0';

    printf("Informe seu salario base: ");
    scanf("%f", &base);

    inss = base - inss;
    liquido = base * TAXA;

    printf("Nome: %s\nSalario base: %.2f\nINSS: %.2f\nSalario liquido: %.2f", name, base, liquido, inss);
}
