#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define TAM 5

/*  Leia dois vetores de inteiros X e Y, cadao um com 5 elementos (assuma que o usuario nao informa elementos repetidos). Calcule e mostre os vetores resultantes em cada caso abaixo:
 - Soma entre X e Y: soma de cada elemento de X com o elemento da mesma posicao em Y;
 - Produto entre X e Y: multiplicacao de cada elemento de X com o elemento da mesma posicao em Y;
 - Diferenca entre X e Y: todos os elementos de X que não exista em Y;
 - Interseccao entre X e Y: apenas os elementos que apareçam nos dois vetores;
 - Uniao entre X e Y: todos os elementos de X, e todos os elementos de Y que nao estao em X. */

int verificar(int elem, int vet[],int tam);

int main(){
    setlocale(LC_ALL,"Portuguese");

    int x[TAM], y[TAM], dif[TAM], c, c2, c3, n=0, uniao[TAM*2], aux=0, inserseccao[TAM];

    printf("Lendo o vetor X: \n");
    for (c=0; c<TAM; c++){
        scanf("%d", &x[c]);
    }

    printf("\n\nLendo o vetor Y: \n");
    for (c=0; c<TAM; c++){
        scanf("%d", &y[c]);
    }

    system("CLS");

    printf("Soma entre X e Y:\n");
    for (c=0; c<TAM; c++){
        printf("%d\n", x[c] + y[c]);
    }

    printf("\n\nProduto entre X e Y:\n");
    for (c=0; c<TAM; c++){
        printf("%d\n", x[c] * y[c]);
    }

    printf("\n\nDiferenca ente X e Y:\n");
    for(c=0; c<TAM; c++){
		for(c2=0; c2<TAM; c2++){
			if(x[c] == y[c2])
				break;
		}

		if(c2==TAM){
			for(c3=0; c3<n; c3++){
				if(x[c] == dif[c])
					break;
			}

			if(c3 == n)
				dif[n++] = x[c];
		}
	}

	for (c=0; c<n; c++){
        printf("%d\n", dif[c]);
	}

	printf("\n\nIntersecção entre X e Y:\n");
    for (c=0; c<TAM; c++){
        for (c2=0; c2<TAM; c2++){
            if (x[c] == y[c2]){
                printf("%d\n", x[c]);
            }
        }
    }

    printf("\n\nUnião entre X e Y:\n");
    for(c=0; c<TAM; c++){
        printf("%d ",x[c]);
    }

    for(c=0; c<TAM; c++){
        if(verificar(y[c], x, TAM)){
           printf("%d ",y[c]);
        }
    }

}

int verificar(int elem, int vet[],int tam){

    int c;
    for(c = 0; c < tam; c++){
        if(elem == vet[c]){
            return 0;
        }
    }
     return 1;
}
