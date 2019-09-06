#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
	int faces[6], sorteio, quantidade;

	for(int x=0; x < 6; x++)
		faces[x] = 0;

	printf("Insira a quantidade de vezes que será jogado o dado: ");
	scanf(" %i",&quantidade);

	srand(time(NULL));
	for(int x=0; x < quantidade; x++){
		sorteio = 1 + rand() % 6;
		faces[sorteio-1]++;
	}

	printf("\n");

	for(int x=0; x < 6; x++)
		printf("A face %i caiu %i vezes \n", x+1, faces[x] );
}