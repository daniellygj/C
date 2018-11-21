#include <stdio.h>
#include <locale.h>
#include <math.h>

// LEIA UM NUMERO REAL E IMPRIMA O RESULTADO DO QUADRADO DESSE NUMERO

int main(){
    float num;

    scanf("%f", &num);

    printf("%f", pow(num, 2));
}
