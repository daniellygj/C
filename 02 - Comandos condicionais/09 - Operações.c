#include <stdio.h>
#include <locale.h>

/*  ESCREVA O MENU DE OPÇÕES ABAIXO. LEIA A OPÇÃO DO USUÁRIO E EXECUTE A OPERAÇÃO ESCOLHIDA. ESCREVA UMA MENSAGEM DE ERRO SE A OPÇÃO FOR INVÁLIDA.
 ESCOLHA A OPÇÃO:
 1- SOMA DE 2 NÚMEROS.
 2- DIFERENÇA ENTRE 2 NÚMEROS (MAIOR PELO MENOR).
 3- PRODUTO ENTRE 2 NÚMEROS.
 4- DIVISÃO ENTRE 2 NÚMEROS (O DENOMINADOR NÃO PODE SER ZERO). */

int main(){
    int opc, n1, n2;

    printf("Escolha a opcao:\n[1] Soma de dois numeros\n[2] Diferenca entre dois numeros\n[3] Produto entre dois numeros\n[4] Divisao entre dois numeros\n");
    scanf("%d", &opc);

    switch(opc){
        case 1:
            printf("Digite os numeros separados por espaco: ");
            scanf("%d %d", &n1, &n2);
            printf("%d + %d = %d", n1, n2, n1 + n2);
            break;

        case 2:
            printf("Digite os numeros separados por espaco: ");
            scanf("%d %d", &n1, &n2);
            if (n1 > n2){
                printf("%d", n1 - n2);
            } else {
                printf("%d", n2 - n1);
            }
            break;

        case 3:
            printf("Digite os numeros separados por espaco: ");
            scanf("%d %d", &n1, &n2);
            printf("%d", n1 * n2);
            break;

        case 4:
            printf("Digite os numeros separados por espaco: ");
            scanf("%d %d", &n1, &n2);
            printf("%d", n1 / n2);
            break;
    }
}
