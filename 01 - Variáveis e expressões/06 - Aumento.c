#include <stdio.h>
#include <locale.h>

int main(){ // AUMENTO
    setlocale(LC_ALL, "portuguese");

    float salario;

    printf("Salario: ");
    scanf("%f", &salario);

    printf("Aumento: %.2f\nNovo salario: %.2f", salario * 15 / 100, salario + salario * 15 / 100);
}
