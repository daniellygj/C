#include <stdio.h>
#include <locale.h>

 // CONVERTER MAIUSCULA PARA MINUSCULA ATRAVES DA TABELA ASCII

int main(){
    char l;

    scanf("%c", &l);

    int lc = (int)l;
    printf("%c", lc - 32);
}
