#include<stdio.h>

char nome;
double salarioF, total;

int main(){
	scanf("%s", &nome);
	scanf("%lf", &salarioF);
	scanf("%lf", &total);

	printf("TOTAL = R$ %.2lf\n", (0.15 * total) + salarioF);

	return 0;
}
