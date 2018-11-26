#include<stdio.h>

int main(){
	int n, n100, n50, n20, n10, n5, n2, n1, aux;
	
	scanf("%d", &n);
	
	while (n < 0 && n > 1000000){
		scanf("%d, &n");
	}
	
	aux = n;
	
	n100 = aux / 100;
	aux %= 100;
	n50 = aux / 50;
	aux %= 50;
	n20 = aux / 20;
	aux %= 20;
	n10 = aux / 10;
	aux %= 10;
	n5 = aux / 5;
	aux %= 5;
	n2 = aux / 2;
	aux %= 2;
	n1 = aux;	
	
	printf("%d\n", n);
	printf("%d nota(s) de R$ 100,00\n", n100);
	printf("%d nota(s) de R$ 50,00\n", n50);
	printf("%d nota(s) de R$ 20,00\n", n20);
	printf("%d nota(s) de R$ 10,00\n", n10);
	printf("%d nota(s) de R$ 5,00\n", n5);
	printf("%d nota(s) de R$ 2,00\n", n2);
	printf("%d nota(s) de R$ 1,00\n", n1);
	
	return 0;
}
