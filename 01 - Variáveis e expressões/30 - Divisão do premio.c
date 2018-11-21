#include <stdio.h>
#include <locale.h>

#define TOT 780000

 /* A IMPORTANCIA DE 780.000,00 SERA DIVIDIDA ENTRE TRES GANHADORES DE UM CONCURSO. SENDO QUE DA QUANTIA TOTAL:
     1ª RECEBERA 46%.
     2º RECEBERA 32%,
     3º RECEBERA O RESTANTE  */

int main(){
    float v1, v2, v3;

    v1 = TOT * 46 / 100;
    v2 = TOT * 32 / 100;
    v3 = TOT * 22 / 100;

    printf("Vencedor 1: %.2f\nVencedor 2: %.2f\nVencedor 3: %.2f\n", v1, v2, v2);
}
