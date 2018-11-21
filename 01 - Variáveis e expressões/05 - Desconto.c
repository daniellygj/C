#include <stdio.h>
#include <locale.h>

#define DESCONTO 0.80

int main(){ // DESCONTO
    setlocale(LC_ALL, "portuguese");

    float preco;

    printf("Preço do produto: ");
    scanf("%f", &preco);

    printf("Desconto: %.2f\nValor final: %.2f", preco - (preco * DESCONTO), preco * DESCONTO);
}
