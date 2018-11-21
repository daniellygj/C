#include <stdio.h>
#include <locale.h>

 /* UMA EMPRESA VENDE O MESMO PRODUTO PARA QUATRO DIFERENTES ESTADOS. CADA ESTADO POSSUI UMA TAXA DIFERENTE DE IMPOSTO SOBRE O
 PRODUTO (MG 7%; SP 12%; RJ 15%; MS 8%). FAÇA UM PROGRAMA EM QUE O USUÁRIO ENTRE COM O VALOR E O ESTADO DESTINO DO PRODUTO E O
 PROGRAMA RETORNE O PREÇO FINAL DO PRODUTO ACRESCIDO DO IMPOSTO DO ESTADO EM QUE ELE SERÁ  VENDIDO. SE O ESTADO DIGITADO NÃO FOR VÁLIDO,
 MOSTRAR UMA MENSAGEM DE ERRO. */

#include <string.h>

int main(){
    char estado[2];
    float valor;

    fgets(estado, 3, stdin);
    strupr(estado);


    if (estado[0] == 'M' && estado[1] == 'G'){
        scanf("%f", &valor);
        printf("%.2f", (valor * 7 / 100) + valor);
    } else if (estado[0] == 'S' && estado[1] == 'P'){
        scanf("%f", &valor);
        printf("%.2f", (valor * 12 / 100) + valor);
    } else if (estado[0] == 'R' && estado[1] == 'J'){
        scanf("%f", &valor);
        printf("%.2f", (valor * 15 / 100) + valor);
    } else if (estado[0] == 'M' && estado[1] == 'G'){
        scanf("%f", &valor);
        printf("%.2f", (valor * 8 / 100) + valor);
    } else {
        printf("Informacao incorreta");
    }
}
