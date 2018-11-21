#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){ //QTD DE OCORRENCIAS DA LETRA A
    char frase[1000];
    int c=0, cont=0, indice=0, indice2=0;

    printf("Digite uma frase: ");
    fgets(frase, 1000, stdin);
    setbuf(stdin, 0);
    frase[strlen(frase)-1] = '\0';

    for(c=0; c<strlen(frase); c++){
        if (frase[c] == 'a'){
            cont += 1;
            indice2 = c;
            if (cont == 1){
                indice = c;
            }
        }
    }

    printf("A letra A aparece %d vezes na frase\nAparece pela primeira vez no indice %d\nAparece pela ultima vez no indice %d", cont, indice, indice2);
}
