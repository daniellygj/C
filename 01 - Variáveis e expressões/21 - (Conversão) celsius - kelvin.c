#include <stdio.h>
#include <locale.h>

// CONVERSAO CELSIUS -> KELVIN

int main(){
    int c;

    scanf("%d", &c);

    printf("%.2f", c + 273.15);
}
