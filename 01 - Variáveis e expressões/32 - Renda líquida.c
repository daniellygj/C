#include <stdio.h>
#include <locale.h>

#define VALOR 30.00

/* UMA EMPRESA CONTRATA UM ENCANADOR A RS 30.00 POR DIA. FAÇA UM PROGRAMA QUE SOLICITE O NUMERO DE DIAS TRABALHADOS E IMPRIMA A QUANTIA
LIQUIDA QUE DEVERA SER PAGA, SABENDO-SE QUE SAO DESCONTADOS 8% PARA O IMPOSTO DE RENDA */

int main(){
    int dias;

    scanf("%d", &dias);

    float pagamento = VALOR * dias;

    printf("%.2f",  pagamento - (pagamento * 8 / 100));
}
