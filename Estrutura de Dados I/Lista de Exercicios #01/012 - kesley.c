#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
	int x, y, n, quantidade;

	srand(time(NULL));

	printf("X: ");
	scanf(" %i",&x);
	printf("Y: ");
	scanf(" %i",&y);

	printf("\nInsira a quantidade de numeros a serem sorteados: ");
	scanf(" %i",&quantidade);

	for(int a=0; a < quantidade; a++){
		n = (x-1) + rand() % y+1;
		printf("%i\n",n);
	}
}