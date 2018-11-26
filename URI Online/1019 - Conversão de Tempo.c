#include<stdio.h>

int main (){
	
	int n, sla , horas, minutos, segundos;
	
	scanf("%d", &n);

	horas = n / 3600;
	minutos = (n % 3600) / 60;
	segundos = (n % 3600) % 60;
	
	printf("%d:%d:%d\n", horas, minutos, segundos);
	
	return 0;
}
