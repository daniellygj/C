#include <stdio.h>
#include <locale.h>

 // QUILOMETROS -> MILHAS

int main(){
    float km; //qulometros

    scanf("%f", &km);

    printf("%.1f", km / 1.61);
}
