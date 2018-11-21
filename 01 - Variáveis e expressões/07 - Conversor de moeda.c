#include <stdio.h>
#include <locale.h>

int main(){ // CONVERSOR DE MOEDA
    setlocale(LC_ALL, "portuguese");

    float real, dolar;

    printf("Valor que deseja converter: ");
    scanf("%f", &real);

    dolar = real / 3.27;

    printf("R$%.2f -> U$%.2f", real, dolar);
}
