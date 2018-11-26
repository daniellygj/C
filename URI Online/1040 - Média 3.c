#include<stdio.h>

int main(){
	float n1, n2, n3, n4, media, exame;
	
	scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
	
	media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10;
	
	printf("Media: %.1f\n", media);
	
	if (media >= 5 && media < 7) {
		printf("Aluno em exame.\n");
		scanf("%f", &exame); // 6.4
		printf("Nota do exame: %.1f\n", exame); 
		if (exame + media < 5) { 
			printf("Aluno reprovado.\n");
		}else{
			printf("Aluno aprovado.\n");
			media = (exame + media) / 2.0;
			printf("Media final: %.1f\n", media);
		}
	}else if (media < 5) {
		printf("Aluno reprovado.\n");
	}else {
		printf("Aluno aprovado.\n");
	}
	return 0;
}
