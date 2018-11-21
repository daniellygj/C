#include <stdio.h>
#include <locale.h>

int main(){ // CONVERSOR DE TEMPERATURA
    setlocale(LC_ALL, "portuguese");

    int c, result;

    printf("Digite os graus em C: ");
    scanf("%d", &c);

    printf("%dºC corresponde a %dºF", c, ((9*c)/5)+32);

}
