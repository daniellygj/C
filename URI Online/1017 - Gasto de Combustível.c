#include<stdio.h>

int main(){
	float tempo, velocidade;
	
	scanf("%f", &tempo);
	scanf("%f", &velocidade);
	printf("%.3f\n", (tempo*velocidade)/12);
	
	return 0;
}
