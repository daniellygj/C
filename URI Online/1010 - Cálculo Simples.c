#include<stdio.h>

int main(){
	float c1, c2, qtd1, qtd2, valor1, valor2;
	
	scanf("%f", &c1);
	scanf("%f", &qtd1);
	scanf("%f", &valor1);
	scanf("%f", &c2);
	scanf("%f", &qtd2);
	scanf("%f", &valor2);
		
	printf("VALOR A PAGAR: R$ %.2f\n", (qtd1 * valor1) + (qtd2 * valor2));
	return 0;
	
}
