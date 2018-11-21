#include <stdio.h>
#include <locale.h>

 //UM DIGITO POR LINHA (4 digitos)

int main(){
    int num, c, aux = 1000;

    scanf("%d", &num);

    for(c=0; c<4; c++){
        printf("%d\n", num / aux % 10);
        aux /= 10;
    }
}
