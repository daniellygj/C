#include <stdio.h>
#include <locale.h>

/* FACA UM PROGRAMA QUE CALCULA A ASSOCIACAO EM PARALELO DE DOIS RESISTORES R1 E R2 FORNECIDOS PELO USUARIO VIA TECLADO.
O PROGRAMA FICA PEDINDO ESTES VALORES E CALCULANDO ATE QUE O USUARIO ENTRE COM UM VALOR PARA RESISTENCIA IGUAL A ZERO.
 R = R1 * R2 / R1 + R2 */

int main(){
    float r1=1, r2=1, r, r11, r22;

    do {
        scanf("%f %f", &r1, &r2);

        if (r1 != 0 && r2 != 0)
            printf("-> %.2f\n\n", (r1 * r2) / (r1 + r2));

    } while (r1 != 0 && r2 != 0);
}
