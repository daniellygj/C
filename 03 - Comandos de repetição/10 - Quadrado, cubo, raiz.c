#include <stdio.h>
#include <locale.h>
#include <math.h>

/* FACA UM PROGRAMA QUE LEIA UM CONJUNTO NAO DETERMINADO DE VALORES, UM DE CADA VEZ, E ESCREVA PARA CADA UM DOS VALORES
QUADRADO, O CUBO E A RAIZ QUADRADA. FINALIZE A ENTRADA DE DADOS COM UM VALOR NEGATIVO OU ZERO */

int main(){
    float n;

    scanf("%f", &n);

    do {
        printf("Ao quadrado: %.2f\n", pow(n, 2));
        printf("Ao cubo: %.2f\n", pow(n, 3));
        printf("Raiz quadrada: %.2f\n\n", sqrt(n));

    scanf("%f", &n);

    } while (n > 0);
}
