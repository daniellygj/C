#include <stdio.h>
#include <locale.h>

#define PI 3,1416

 // GRAUS -> RADIANOS

int main(){
    float g; //graus

    scanf("%f", &g);

    printf("%.1f", g * PI / 180 );
}
