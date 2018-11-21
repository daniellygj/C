#include <stdio.h>
#include <locale.h>

/* LEIA A IDADE E O TEMPO DE SERVIÇO DE UM TRABALHADOR E ESCREVA SE ELE PODE OU NAO SE APOSENTAR. AS CONDIÇÕES PARA APOSENTADORIA SAO
  - TER PELO MENOS 65 ANOS,
  - OU TER TRABALHADO PELO MENOS 30 ANOS,
  - OU TER PELO MENOS 60 ANOS E TRABALHADO PELO MENOS 25 ANOS.*/

int main() {
    int idade, tempo;

    printf("Digite sua idade e logo em seguida, o tempo de serviço em anos: ");
    scanf("%d %d", &idade, &tempo);

    if (idade >= 65){
        printf("Pode se aposentar\n");
    } else if (tempo >= 30){
        printf("Pode se aposentar\n");
    } else if (idade >= 60 && tempo >= 25){
        printf("Pode se aposentar\n");
    } else {
        printf("Não pode se aposentar");
    }
}
