#include <stdio.h>
#include <locale.h>
#include <math.h>

// LEIA UM NÚMERO REAL. SE O NÚMERO FOR POSITIVO IMPRIMA A RAIZ QUADRADA. DO CONTRÁRIO, IMPRIMA O NÚMERO AO QUADRADO

int main(){
    float num;

    scanf("%f", &num);

    if (num > 0){
        printf("%.2f", sqrt(num));
    } else {
        printf("%.2f", pow(num, 2));
    }
}
