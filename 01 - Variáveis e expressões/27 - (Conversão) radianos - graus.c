#include <stdio.h>
#include <locale.h>

 // RADIANOS -> GRAUS

#define PI 3,1416

int main(){
    float r; //radianos

    scanf("%f", &r);

    printf("%.1f", r * 180/PI);
}
