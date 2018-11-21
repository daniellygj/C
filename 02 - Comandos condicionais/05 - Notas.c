#include <stdio.h>
#include <locale.h>

/* FAÇA UM PROGRAMA QUE LEIA 2 NOTAS DE UM ALUNO, VERIFIQUE SE AS NOTAS SAO VÁLIDAS E EXIBA NA TELA A MÉDIA DESTAS NOTAS. UMA NOTA VÁLIDA
DEVE SER, OBRIGATORIAMENTE, UM VALOR ENTRE 0.0 E 10.0, ONDE CASO A NOTA NAO POSSUA UM VALOR VÁLIDO, ESTE FATO DEVE SER INFORMADO AO USUÁRIO
E O PROGRAMA TERMINA. */

int main(){
    float n1, n2, media;

    scanf("%f", &n1);
    scanf("%f", &n1);
    if (n1 < 0.0 || n1 > 10.00){
        printf("Nota invalida\n");

    } else if (n2 < 0.0 || n2 > 10.00){
        printf("Nota invalida\n");

    } else {
        media = n1 + n2 / 2 ;
        printf("%.2f\n", media);
    }
}
