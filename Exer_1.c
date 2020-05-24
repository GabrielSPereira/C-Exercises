#include <stdio.h>
#include <stdlib.h>

void calc_esfera(float R, float *area, float *volume){
	float pi = 3.14159265358979323846;
	*area = 4 * pi * pow(R, 2);
	*volume = 4/3 * pi * pow(R, 3);
}


void main(){
	float area, volume;
	calc_esfera(5, &area, &volume);
	printf("\n Area: %.2f\n", area);
	printf("\n Volume: %.2f\n", volume);
}
