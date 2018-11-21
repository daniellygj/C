#include <stdio.h>
#include <locale.h>

/* VERIFIQUE SE UM DETERMINADO ANO LIDO E BISSEXTO. SENDO QUE UM ANO E BISSEXTO SE FOR DIVISÍVEL POR 400 OU SE FOR DIVISÍVEL POR 4 E NÃO FOR
DIVISÍVEL POR 100. */

int main(){
    int ano;

    scanf("%d", &ano);

    if (ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0){
        printf("O ano %d e bissexto", ano);
    } else {
        printf("O ano %d nao e bissexto", ano);
    }
}
