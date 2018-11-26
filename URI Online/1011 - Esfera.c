#include<stdio.h>
#include<math.h>

int main(){
	double R;
	scanf("%lf", &R);
	printf("VOLUME = %.3lf\n", (4.0/3.0) * 3.14159 * pow(R,3));
}
