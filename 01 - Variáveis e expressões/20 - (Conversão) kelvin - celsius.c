#include <stdio.h>
#include <locale.h>
// CONVERSAO KELVIN -> CELSIUS

int main() {
    int k;

    scanf("%d", &k);

    printf("%.2f", k - 273.15);
}
