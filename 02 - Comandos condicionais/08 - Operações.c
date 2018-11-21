#include <stdio.h>
#include <locale.h>
/* FAÇA UM PROGRAMA QUE MOSTRE AO USUÁRIO UM MENU COM 4 OPÇÕES DE OPERAÇÕES MATEMÁTICAS (AS BÁSICAS, POR EXEMPLO). O USUÁRIO
ESCOLHE UMA DAS OPÇÕES E O SEU PROGRAMA ENTÃO // PEDE DOIS VALORES NUMÉRICOS E REALIZA A OPERAÇÃO, MOSTRANDO O RESULTADO E SAINDO */

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, op;


    printf("Digite a operacao separada por espaco. Exemplo: 1 + 1\nOperacoes disponiveis: \n+ (soma)\n- (subtracao)\n/ (divisao)\nx (multiplicacao)\n");
    scanf("%d %c %d", &n1, &op, &n2);

    switch(op){
        case '+':
            printf("\n%d + %d = %d", n1, n2, n1 + n2);
            break;

        case '-':
            printf("\n%d - %d = %d", n1, n2, n1 - n2);
            break;

        case '/':
            printf("\n%d / %d = %d", n1, n2, n1 / n2);
            break;
        case 'x':

            printf("\n%d * %d = %d", n1, n2, n1 * n2);
            break;

        default:
            printf("Opção inválida");
    }

}
