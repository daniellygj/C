#include <stdio.h>
#include <locale.h>

// IMPLEMENTE UM PROGRAMA QUE CALCULE O ANO DE NASCIMENTO DE UMA PESSOA A PARTIR DE SUA IDADE E DO ANO ATUAL.

int ano(void) {
    #include <time.h>
    time_t ano;
    ano = time(NULL);
    struct tm tm = *localtime(&ano);
    return tm.tm_year + 1900;
}

int main(){
    setlocale(LC_ALL, "portuguese");

    int idade;

    scanf("%d", &idade);

    printf("Sua você nasceu no ano: %d", ano() - idade);
}
