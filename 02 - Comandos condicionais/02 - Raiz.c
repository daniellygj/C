#include <stdio.h>
#include <locale.h>
#include <math.h>

/* LEIA UM NÚMERO FORNECIDO PELO USUÁRIO. SE ESSE NÚMERO FOR POSITIVO, CALCULE A RAIZ QUADRADA DO NÚMERO. SE O NÚMERO FOR NEGATIVO,
MOSTRE UMA MENSAGEM DIZENDO QUE O NÚMERO É INVALIDO. */

int main(){
    int num;

    scanf("%d", &num);

    if (num > 0){
        printf("%.2f", sqrt(num));
    } else {
        printf("Numero invalido");
    }
}
