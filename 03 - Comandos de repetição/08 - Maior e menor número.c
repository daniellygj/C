#include <stdio.h>
#include <locale.h>

/* ELABORE UM PROGRAMA QUE FACA LEITURA DE VARIOS NUMEROS INTEIROS, ATE QUE SE DIGITE UM NUMERO NEGATIVO. O PROGRAMA TEM
QUE RETORNAR O MAIOR E O MENOR NUMERO LIDO. */

int main() {
    int num, maior, menor, c=1;

    scanf("%d", &num);

    do{
        if (c == 1){
            maior = num;
            menor = num;
            c++;
        }

        if (num > maior){
            maior = num;
        }
        if (num < menor){
            menor = num;
        }
        scanf("%d", &num);

    } while (num >= 0);

    printf("\nMaior: %d\nMenor: %d\n", maior, menor);
}
