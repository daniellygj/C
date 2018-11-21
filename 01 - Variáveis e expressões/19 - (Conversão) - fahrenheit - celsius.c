#include <stdio.h>
#include <locale.h>

 // CONVERSAO FAHRENHEIT -> CELSIUS

int main(){
    int f;

    scanf("%d", &f);

    printf("%.2f", 5.0 * (f - 32.0) / 9.0);
}
