#include<stdio.h>

int main(){
	int dias, anos, meses, dias1, aux, aux1;;
	
	scanf("%d", &dias);
	anos = dias / 365;
	aux = 365 * anos;
	meses = (dias - aux) / 30;
	aux1 = 30 * meses;
	dias1 = dias - (aux + aux1);


	printf("%d ano(s)\n", anos);
	printf("%d mes(es)\n", meses);
	printf("%d dia(s)\n", dias1);
	
	return 0;
}
