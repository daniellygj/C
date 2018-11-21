#include <stdio.h>
#include <locale.h>

int main(){ //DOBRO, TRIPLO, RAIZ
    setlocale(LC_ALL, "portuguese");

    int a;
    printf("Escreva um número ");
    scanf("%d", &a);

    printf("Dobro: %d\n", a*2);
    printf("Triplo: %d\n", a*3);
    printf("Raiz: %d\n", a ^ (1/2));
}
