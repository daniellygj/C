#include <stdio.h>
#include <locale.h>
#include <math.h>
#define PI 3.1416

/* Implemente uma funcao que calcule a ˜area da superfıcie e o volume de uma esfera de
raio R. Essa funcao deve obedecer ao prototipo:
void calc_esfera(float R, float *area, float *volume);
A area da superfıcie e o volume sao dados, respectivamente, por:
A = P * r^2
V = 4/3 * p * R^3 */

void calc_esfera(float R, float *area, float *volume);

int main(){
    float raio, area, volume;

    printf("Raio: ");
    fflush(stdin);
    scanf("%f", &raio);

    calc_esfera(raio, &area, &volume);

    printf("Area: %.2f\n", area);

    printf("Volume: %.2f", volume);
}

void calc_esfera(float R, float *area, float *volume){

    *area = PI * pow(R, 2.0);
    *volume = 4 * PI * pow(R, 3.0) / 3;
}
