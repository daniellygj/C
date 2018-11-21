#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

/* FAÇA UMA PROVA DE MATEMÁTICA PARA CRIANÇAS QUE ESTÃO APRENDENDO A SOMAR NÚMEROS INTEIROS MENORES DO QUE 100. ESCOLHA NÚMEROS
 ALEATÓRIOS ENTRE 1 E 100, E MOSTRE NA TELA A PERGUNTA: QUAL É A SOMA DE A + B, ONDE A E B SAO OS NÚMEROS ALEATÓRIOS. PECA A RESPOSTA. FAÇA
 CINCO PERGUNTAS AO ALUNO, E MOSTRE PARA ELE AS PERGUNTAS E AS RESPOSTAS CORRETAS, ALÉM DE QUANTAS VEZES O ALUNO ACERTOU */

int main(){
    int n1, n2, resp, respA, acertos = 0, erros = 0, opc;

    do {
        srand(time(NULL)) ;

        system("CLS");
        n2 = rand() % 101;
        n1 = rand() % 101;


        resp = n1 + n2;

        printf("Quanto e %d + %d? ", n1, n2);
        scanf("%d", & respA);

        if (resp == respA){
            printf("Parabens! resposta correta!\n");
            acertos += 1;
        } else {
            printf("Resposta incorreta. A resposta correta e %d.\n", resp);
            erros += 1;
        }

        printf("\nDeseja continuar? [1]SIM [2]NAO");
        scanf("%d", &opc);

        while (opc != 1 && opc != 2) {
            printf("Opção inválida, tente novamente.\n");
            printf("\nDeseja continuar? [1]SIM [2]NAO ");
            fflush(stdin);
            scanf("%d", &opc);
        }

    }  while (opc == 1);

    printf("\nAcertos: %d\nErros: %d", acertos, erros);

}
