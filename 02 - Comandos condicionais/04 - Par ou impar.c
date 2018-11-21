#include <stdio.h>
#include <locale.h>

// VERIFIQUE SE UM NUMERO É PAR OU IMPAR

int main(){
    setlocale(LC_ALL, "portuguese");

    int num;

    scanf("%d", &num);

    if (num % 2 == 0){
        printf("É par.");
    } else {
        printf("É impar.");
    }
}
