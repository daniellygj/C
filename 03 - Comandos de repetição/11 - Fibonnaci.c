#include <stdio.h>
#include <locale.h>

/*  LEIA UM NUMERO POSITIVO DO USUARIO, ENTAO, CALCULE E IMPRIMA A SEQUENCIA FIBONACCI ATE O PRIMEIRO NUMERO SUPERIOR AO
NUMERO LIDO, POR EXEMPLO: SE O USUARIO INFORMOU O NUMERO 30, A SEQUENCIA A SER IMPRESSA SERA 0 1 1 2 3 5 8 13 21 34 */

int main(){
    int n, c, t1=0, t2=1, t3=0;

    scanf("%d", &n);

    if (n >= 2){
        printf("%d %d ", t1, t2);

        while (t3 < n){
            t3 = t1 + t2;
            t1 = t2;
            t2 = t3;
            printf("%d ", t3);
        }
    } else {
        printf("%d", t1);
    }
}
