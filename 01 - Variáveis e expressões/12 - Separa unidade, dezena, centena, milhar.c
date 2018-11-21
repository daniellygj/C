#include <stdio.h>
#include <locale.h>

int main(){ // SEPARA UNID, DEZ, CENT, MIL
    unsigned int num, u, d, c, m;

    printf("Digite um numero: ");
    scanf("%d", &num);

    u = num / 1 % 10;
    d = num / 10 % 10;
    c = num / 100 % 10;
    m = num / 1000 % 10;

    printf("Unidade: %d\nDezena: %d\nCentena: %d\nMilhar: %d", u, d, c, m);
}
