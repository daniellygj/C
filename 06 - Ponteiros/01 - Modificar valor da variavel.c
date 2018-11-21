#include <stdio.h>
#include <locale.h>

/* Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro,
real, e char.
Associe as variaveis aos ponteiros . Modifique os valores de cada variavel usando os ponteiros. Imprima os
valores das variaveis antes e apos a modificacao. */

int main(){

    int varint = 10, *pontint;
    float varfloat = 10.10, *pontfloat;
    char varchar = 'd', *pontchar;

    pontint = &varint;
    pontfloat = &varfloat;
    pontchar = &varchar;

    printf("int -> %d\n", varint);
    printf("float -> %.2f\n", varfloat);
    printf("char -> %c\n", varchar);

    *pontint = 30;
    *pontfloat = 20.5;
    varchar = 'm';


    printf("\n\nint -> %d\n", varint);
    printf("float -> %.2f\n", varfloat);
    printf("char -> %c\n", varchar);

    return 0;
}
