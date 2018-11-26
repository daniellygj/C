#include<stdio.h>

int main(){
	int codigo, qtd;
	
	scanf("%d%d", &codigo, &qtd);
	
	if (codigo == 1) {
		printf("Total: R$ %.2f\n", 4.00 * qtd);
	} else if (codigo == 2) {
		printf("Total: R$ %.2f\n", 4.50 * qtd);
	} else if (codigo == 3){
		printf("Total: R$ %.2f\n", 5.00 * qtd);
	} else if (codigo == 4){
		printf("Total: R$ %.2f\n", 2.00 * qtd);
	}else if (codigo == 5) {
		printf("Total: R$ %.2f\n", 1.50 * qtd);
	}
	
	return 0;
	
}
