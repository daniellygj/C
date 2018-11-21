#include <stdio.h>
#include <locale.h>

/* Considere a seguinte declaracao: int A, *B, **C, ***D; Escreva um programa que
leia a variavel a e calcule e exiba o dobro, o triplo e o quadruplo desse valor utilizando
apenas os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C o triplo e
D o quadruplo. */

int main(){
    int a, *b, *c, *d;

    scanf("%d", &a);

    b = &a;
    c = &a;
    d = &a;

    printf("\n%d\n%d\n%d", *b * 2, *c * 3, *d * 4);
}
