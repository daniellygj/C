#include <stdio.h>
#include <locale.h>

 /* LEIA O VALOR DA HORA DE TRABALHO E O NUMERO DE HORAS TRABALHADAS. IMPIMA O VALOR A SER PAGO AO FUNCIONARIO ADICIONANDO 10% SOBRE O
 VALOR CALCULADO */

int main(){
    float valor, areceber;
    int dias;

    scanf("%f", &valor);
    scanf("%d", &dias);

    areceber = valor * dias;

    printf("%.2f", (areceber * 10 / 100) + areceber);
}
