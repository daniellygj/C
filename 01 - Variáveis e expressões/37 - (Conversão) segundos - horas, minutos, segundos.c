#include <stdio.h>
#include <locale.h>

#define SEGSH 3600

// CONVERTER SEGUNDOS EM MINUTOS, HORAS E SEGUNDOS

int main(){
    int seg, hs, min;


    scanf("%d", &seg);


    hs = seg / SEGSH;
    min = (seg % SEGSH)/60;
    seg = seg % 60;

    printf("%d : %d : %d", hs, min, seg);
}
