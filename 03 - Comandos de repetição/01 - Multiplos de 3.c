#include <stdio.h>
#include <locale.h>
#define N 3

// FACA UM PROGRAMA QUE DETERMINE O MOSTRE OS CINCO PRIMEIROS MULTIPLOS DE 3, CONSIDERANDO NUMEROS MAIORES QUE 0.

int main(){
    int num, multiplo=0, c=0, i=0;

    do {
        if (i % 3 == 0){
            printf("%d ", i);
            multiplo ++;
        }
        i++;
    }while (multiplo <= 5);

    return 0;

}
