#include <stdio.h>
#include <locale.h>

/* USANDO SWITCH, ESCREVA UM PROGRAMA QUE LEIA UM INTEIRO ENTRE 1 E 7 E IMPRIMA O DIA DA SEMANA CORRESPONDENTE A ESTE NÚMERO. ISTO É,
DOMINGO SE 1, SEGUNDA-FEIRA SE 2, E ASSIM POR DIANTE */
int main(){
    setlocale(LC_ALL, "portuguese");

    int dia;

    scanf("%d", &dia);

    switch(dia){
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda\n");
            break;
        case 3:
            printf("Terça\n");
            break;
        case 4:
            printf("Quarta\n");
            break;
        case 5:
            printf("Quinta\n");
            break;
        case 6:
            printf("Sexta\n");
            break;
        case 7:
            printf("sabado\n");
            break;
        default:
            printf("Opção inválida");
            break;
    }
}
