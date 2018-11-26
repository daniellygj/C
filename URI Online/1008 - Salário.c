#include<stdio.h>

int num;
float salario, horas;

int main() {
	scanf("%d", &num);
	scanf("%f", &salario);
	scanf("%f", &horas);
		
	printf("NUMBER = %d\n", num);
	printf("SALARY = U$ %.2f\n", salario * horas);
	return 0;
}
