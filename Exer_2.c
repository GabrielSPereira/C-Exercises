#include <stdio.h>
#include <stdlib.h>

void calc_menor(int vet[], int *menor, int *vezes){
	int i;
	for(i=0;i<9;i++){
		if(i == 0){
			*menor = vet[i];
		}
		if(vet[i] < *menor){
			*menor = vet[i];
		}
	}
	
	for(i=0;i<9;i++){		
		if(vet[i] == *menor){
			*vezes = *vezes + 1;
		}
	}
}


void main(){
	int vet[] = {5, 2, 15, 3, 7, 2, 8, 6, 2}, menor, vezes = 0;
	calc_menor(vet, &menor, &vezes);
	printf("\n Menor: %d\n", menor);
	printf("\n Vezes: %d\n", vezes);
}
