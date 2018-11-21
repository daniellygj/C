#include <stdio.h>
#include <locale.h>

int main(){ // QTS CM E ML TEM O METRO
    int metro;

    printf("Metro: ");
    scanf("%d", &metro);

    printf("%d metros tem %d centimetros e %d milimetros.\n", metro, metro * 100, metro * 1000);

}
