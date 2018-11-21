#include <stdio.h>
#include <locale.h>

 // HM/H -> METROS POR SEGUNDO.

int main(){
    float kmh; //km por hora

    scanf("%f", &kmh);

    printf("%.1f", kmh / 3.6);
}
