#include <stdio.h>
#include <locale.h>

int main(){ // ALUGUEL DE CARRO
    setlocale(LC_ALL, "portuguese");

    float dias, km;
    printf("Dias usados: ");
    scanf("%f", &dias);

    printf("KM rodados: ");
    scanf("%f", &km);

    printf("O valor é %.2f", (60*dias)+(0.15*km));

}
