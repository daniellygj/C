#include <stdio.h>
#include <locale.h>

 // FAÇA UM PROGRAMA QUE LEIA DOIS NUMEROS E MOSTRE QUAL DELES É O MAIOR

int main(){
    setlocale(LC_ALL, "portuguese");

    int n1, n2;

    scanf("%d \n %d", &n1, &n2);

    if (n1 > n2){
        printf("%d é maior", n1);
    } else if (n2 > n1){
        printf("%d é maior", n2);
    } else {
        printf("Numeros iguais");
    }
}
