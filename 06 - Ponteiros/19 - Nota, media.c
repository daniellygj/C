#include <stdio.h>
#include <locale.h>

/* Faca um programa que possua uma funcao para:

- ler 2 notas e retorna-las por parametro (chamar uma funcao dedicada a ler 2 notas validas e
devolver os 2 numeros lidos);

- calcular a media simples e a media ponderada e retorna-las por parametro, onde a segunda nota
 tem peso 2 ( media ponderada = (n1 + n2*2)/3; ) */

void ler_nota(float *n1, float *n2);

void calcular_nota(float *MS, float *MP, float n1, float n2);

int main(){
    float n1, n2, media, mediaP;

    ler_nota(&n1, &n2);

    calcular_nota(&media, &mediaP, n1, n2);

    printf("media simples: %.2f\nMedia ponderada %.2f", media, mediaP);

    return 0;
}

void ler_nota(float *n1, float *n2){

    printf("Nota 1: ");
    scanf("%f", &*n1);

    printf("Nota 2: ");
    scanf("%f", &*n2);
}

void calcular_nota(float *MS, float *MP, float n1, float n2){
    *MS = (n1 + n2) / 2;
    *MP = (n1 + n2 * 2) / 3;

}
