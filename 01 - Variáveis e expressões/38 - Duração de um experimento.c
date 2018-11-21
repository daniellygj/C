#include <stdio.h>
#include <locale.h>

/* FAÇA UM PROGRAMA QUE LEIA O HORARIO(hora min seg) DE INICIO E A DURAÇÃO, EM SEGUNDOS, DE UMA EXPERIENCIA BIOLOGICA. O PROGRAMA DEVE
RESULTAR COM O NOVO HORARIO (hora min seg) DO TERMINO DA MESMA */

int main(){
    setlocale(LC_ALL, "portuguese");

    int hi, mi, si, duracao, h, m, s, aux;

    printf("Digite a horario de inicio separando horas, mins e segs por espaço: \n");
    scanf("%d %d %d", &hi, &mi, &si);

    printf("\nEntre com o tempo de duração em segundos \n");
    scanf("%d", &duracao);

    h = duracao / 3600;
    m = h % 60;
    s = m % 60;

    if (h + hi > 23){
        aux = h + hi;
        h = aux - 23;
        hi = 00;
    }
    if (m + mi > 60){
        aux = m + mi;
        m = aux - 23;
        mi = 00;
    }
    if (s + si > 60){
        aux = s + si;
        s = aux - 23;
        si = 00;
    }


    printf("\nA experiencia ira acabar as: %dh %dm %ds\n", h+hi, m+mi, s+si);
}
