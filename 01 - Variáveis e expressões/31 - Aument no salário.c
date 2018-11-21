#include <stdio.h>
#include <locale.h>

 // AUMENTO NO SALARIO

int main(){
    float salario;

    scanf("%f", &salario);

    printf("\nAumento: %.2f\nSalario final: %.2f\n", salario * 25 / 100, (salario * 25 / 100) + salario );
}
