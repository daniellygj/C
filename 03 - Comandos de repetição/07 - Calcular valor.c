#include <stdio.h>
#include <locale.h>

/* FACA UM PROGRAMA QUE LEIA UM VALOR N INTEIRO E POSITIVO, CALCULE O MOSTRE O VALOR, CONFORME A FORMULA A SEGUIR
E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N! */

int fatorial(float n){
    if (n == 1){
        return 1;
    }
    return n * fatorial(n-1);
}

int main(){
    float result=1, fat=1;
    int n, c;

    scanf("%d", &n);

    for( c=1; c<=n ; c++){
    //fat *= c; pode ser isso ou..
    fat = fatorial(c);
    result += 1.0/ fat;
    }

    printf("%f\n", result);

    return 0;
}
