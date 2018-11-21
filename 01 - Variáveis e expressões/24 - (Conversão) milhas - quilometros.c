#include <stdio.h>
#include <locale.h>

 // MILHAS -> QUILOMETROS

int main(){
    float m; //milhas

    scanf("%f", &m);

    printf("%.1f", 1.61 * m);
}
