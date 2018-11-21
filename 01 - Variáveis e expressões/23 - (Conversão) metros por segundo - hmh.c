#include <stdio.h>
#include <locale.h>

// METROS POR SEGUNDO -> KM/H

int main(){
    float ms; //metro por segundo

    scanf("%f", &ms);

    printf("%.1f", ms * 3.6);
}
