#include <stdio.h>
#include <locale.h>

 // Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor. Calcule e imprima a media geral
int main(){
    float notas[15], media=0;
    int c;

    for (c=0; c<15; c++){
        scanf("%f", &notas[c]);
        media += notas[c];
    }

    printf("%.2f", media / 15);

    return 0;
}
