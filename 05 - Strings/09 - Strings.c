#include <stdio.h>
#include <locale.h>

/* Faca um programa que contenha um menu com as seguintes opcoes:
(a) Ler uma string S1 (tamanho maximo 20 caracteres);
(b) Imprimir o tamanho da string S1;
(c) Comparar a string S1 com uma nova string S2 fornecida pelo usuario e imprimir o resultado da comparacao;
(d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenacao;
(e) Imprimir a string S1 de forma reversa;
(f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse ser informado pelo usuario;
(g) Substituir a primeira ocorrencia do caractere C1 da string s1 pelo caractere C2. Os caracteres C1 e C2 ser˜ao lidos pelo usuario;
(h) Retornar uma substring da string s1. Para isso o usuario deve informar a partir de qual posicao deve ser criada a substring e qual e o tamanho da substring.
(i) Sair do programa */


#include <string.h>
#include <stdio.h>
#include <ctype.h>
#define TAM 20


int menu(){
    char opc;

    printf("|-----------------------------------------------------------|\n");
    printf("| A | Ler string                                            |\n");
    printf("|---|                                                       |\n");
    printf("| B | Tamanho da string1                                    |\n");
    printf("|---|                                                       |\n");
    printf("| C | Comparar string1 com a string2a                       |\n");
    printf("|---|                                                       |\n");
    printf("| D | Concatenar string1 com string2                        |\n");
    printf("|---|                                                       |\n");
    printf("| E | Imprimir string1 invertida                            |\n");
    printf("|---|                                                       |\n");
    printf("| F | Quantidade de ocorrencias de um caractere na string1  |\n");
    printf("|---|                                                       |\n");
    printf("| G | Subsituir o primeiro caractere1 pelo caractere2       |\n");
    printf("|---|                                                       |\n");
    printf("| H | Retornar substring da string1                         |\n");
    printf("|---|                                                       |\n");
    printf("| I | Sair                                                  |\n");
    printf("|-----------------------------------------------------------|\n");
    scanf("%c", &opc);

    return tolower(opc);
}


void pedirstr1(char *str1){

        printf("Entre com a string1: ");
        fflush(stdin);
        fgets(str1, TAM, stdin);
        str1[strlen(str1)-1] = '\0';
}

void pedirstr2(char *str2){

        printf("Entre com a string2: ");
        fflush(stdin);
        fgets(str2, TAM, stdin);
        str2[strlen(str2)-1] = '\0';
}


int main(){
    char str1[TAM] = " NULL ", str2[TAM] = " NULL ", char1, char2, c, opc, sair=0, c2, junto[TAM];
    int inicio, fim, contchar = 0;


    do {
        fflush(stdin);

        opc = menu();
        printf("\n\n");

        switch(opc){

        case 'a':
                //system("CLS");

                pedirstr1(str1);

                break;

        case 'b': //b, f, G
                //system("CLS");

                if (strcmp(str1, " NULL ") == 0){
                    printf("Nao existe nenhum valor na string1.\n");
                    printf("\n\n");
                } else {
                    printf("O tamanho da string1 e: %d\n", strlen(str1));
                    printf("\n\n");
                }

                break;

        case 'c':
                //system("CLS");

                pedirstr1(str1);
                pedirstr2(str2);

                if (strcmpi(str1, str2) == 0){
                    printf("As strings 1 e 2 sao iguais.\n");
                    printf("\n\n");
                } else {
                    printf("As strings 1 e 2 sao diferentes. \n");
                    printf("\n\n");
                }

                break;

        case 'd':
                //system("CLS");

                pedirstr1(str1);

                pedirstr2(str2);

                printf("string1 + string2 = %s%s\n", str1, str2); //posso usar strcat mas da ruim pq fica armazenado na variavel
                printf("\n\n");

                break;

        case 'e':
                //system("CLS");

                pedirstr1(str1);

                printf("String1 invertida: ");
                for (c=strlen(str1); c>=0; c--){
                    printf("%c", str1[c]);
                }

                printf("\n\n");

                break;

        case 'f':
                //system("CLS");

                pedirstr1(str1);

                printf("Letra que deseja contar: ");
                scanf("%c", &char1);

                for (c=0; c<strlen(str1); c++){
                    if (str1[c] == char1){
                        contchar ++;
                    }
                }

                printf("A letra %c aparece %d vezes na string1.\n", char1, contchar);
                printf("\n\n");

                break;

        case 'g':
                //system("CLS");

                pedirstr1(str1);

                printf("Entre com o caractere que deseja substituir: [diferencie maiusculas de minusculas]");
                scanf("%c", &char1);

                fflush(stdin);

                printf("Qual caractere deseja colocar no lugar? ");
                scanf("%c", &char2);

                //for (c=0; c<strlen(str1); c++){
                //    if (str1[c] == char1){
                //        str1[c] = char2;
                //        break;
                //    }
               // }

               for (c=0; str1[c] != char1; c++);

               str1[c] = char2;

                printf("Nova string: %s", str1);
                printf("\n\n");

                break;

        case 'h':
                //system("CLS");

                pedirstr1(str1);

                printf("A partir de qual posicao? ");
                scanf("%d", &inicio);

                fflush(stdin);

                printf("Até onde? ");
                scanf("%d", &fim);

                while (inicio > fim){
                    printf("A posicao de inicio deve ser menor do que a do fim. \n");

                    printf("A partir de qual posicao? ");
                    scanf("%d", &inicio);

                    printf("Ate onde? ");
                    scanf("%d", &fim);
                }

                printf("Substring: ");
                for (c=inicio; c<fim; c++){
                    printf("%c", str1[c]);
                }

                printf("\n\n");

                break;
        case 'i':
                sair = 1;

                break;

        default:
                //system("CLS");

                printf("Informacao invalida, tente novamente. \n");
                printf("\n\n");

                break;
        }
    } while (!sair);

    return 0;
}
