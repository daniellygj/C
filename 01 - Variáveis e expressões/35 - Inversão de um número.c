#include <stdio.h>
#include <locale.h>

// INVERSAO NUMERO DE 3 DIGITOS

int main(){
    int num, n1, n2, n3;

    scanf("%d", &num);

    n1 = num / 1 % 10;
    n2 = num / 10 % 10;
    n3 = num / 100 % 10;

    printf("%d%d%d", n1, n2, n3);
}
