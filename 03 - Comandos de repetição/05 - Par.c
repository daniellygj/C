#include <stdio.h>
#include <locale.h>
/* LEIA UMA SEQUENCIA DE NUMEROS INTEIROS E DETERMINE SE ELES SAO PARES OU NAO. DEVERA SER INFORMADO O NUMERO DE DADOS LIDOS E
NUMERO DE VALORES PARES. O PROCESSO TERMINA QUANDO FOR DIGITADO O NUMERO 1000 */

int main(){
    int num=3, par=0, qtd=0;

    do {
        if (num % 2 == 0){
            par ++;
        }
        qtd ++;
        scanf("%d", &num);
    } while (num != 1000);

    printf("Total de numeros digitados: %d\nTotal de numeros pares: %d", qtd, par -1);

    return 0;
}
