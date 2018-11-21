#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/* Faca um programa que leia dois numeros N e M e:
- Crie e leia uma matriz de inteiros N x M;
- Imprima os tres maiores numeros */


int OrdenarMatriz(int **matriz, int linha, int coluna);

int main(){
    int **matriz, linha, coluna;

    printf("Quantidade de linhas da matriz: ");
    scanf("%d", &linha);

    printf("Quantidade de colunas da matriz: ");
    scanf("%d", &coluna);

    matriz = (int**) malloc(linha * sizeof(int *));


    for (int c=0; c<linha; c++){
        matriz[c] = (int*) malloc(coluna* sizeof(int*));
    }


    for (int c=0; c<linha; c++){
        for (int c2=0; c2<coluna; c2++){
            scanf("%d", &matriz[c][c2]);
        }
    }

    OrdenarMatriz(matriz, linha, coluna);

    printf("\n\n%d ", matriz[0][coluna-3]);
    printf("%d ", matriz[0][coluna-2]);
    printf("%d\n", matriz[0][coluna-1]);

    system("pause");
}

int OrdenarMatriz(int **matriz, int linha, int coluna){
    int menor, cont=0, indice, aux = linha * coluna;
	int vet[aux];

	for (int c=0; c<linha; c++){
	    for (int c2=0; c2<coluna; c2++){
	        vet[cont] = matriz[c][c2];
	        cont++;
	    }
	}

	for (int c=0; c<aux; c++){
	    menor=vet[c];
	    for (int c2=0; c2<aux; c2++){
	        if (vet[c2] < menor){
	            menor = vet[c2];
	            int aux = vet[c];
	            vet[c] = menor;
	            vet[c2] = aux;
	        }
	    }
	}

	for (int c=0, cont=0; c<linha;c++){
	    for (int c2=0; c2<coluna; c2++){
	        matriz[c][c2] = vet[cont];
	        cont++;
	    }
	}
}
