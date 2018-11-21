#include <stdio.h>
#include <locale.h>

/* ESCREVA UM PROGRAMA QUE LEIA UM NÚMERO INTEIRO MAIOR DO QUE ZERO E DEVOLVA, NA TELA, A SOMA DE TODOS OS SEUS ALGARISMOS. POR
 EXEMPLO, AO NÚMERO 251 CORRESPONDER AO VALOR 8 (2 + 5 + 1). SE O NÚMERO LIDO NÃO FOR MAIOR DO QUE ZERO, O PROGRAMA TERMINARÁ COM A
 MENSAGEM 'NÚMERO INVÁLIDO' */

int main(){
    int num, soma = 0;

    scanf("%d", &num);

    while (num > 0){
        soma += num % 10;
        num /= 10;
    }

    printf("%d\n", soma);
}


