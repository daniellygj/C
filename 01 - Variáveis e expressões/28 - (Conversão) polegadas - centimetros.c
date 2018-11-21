#include <stdio.h>
#include <locale.h>

 // POLEGADAS -> CENTIMETROS

int main(){
    float p; //polegadas

    scanf("%f", &p);

    printf("%.2f", p * 2.54);
}
