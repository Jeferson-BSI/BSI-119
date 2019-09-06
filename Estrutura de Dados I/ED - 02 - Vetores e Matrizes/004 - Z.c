#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
	int x, y;

	// pede para o usuário inserir o tamanho da matriz
	printf("X > ");
	scanf(" %i",&x);

	printf("Y > ");
	scanf(" %i",&y);

	// Define a matrix com o tamanho que o usuário definiu
	int sorteio[x][y];

	srand(time(NULL));

	// Zera toda a matrix
	for(int a=0; a < x; a++){
		for(int b=0; b < y; b++)
			sorteio[a][b] = 10 + rand() % 90; // Randomiza numeros de 10 a 99
	}

	// Mostra toda a matrix
	for(int a=0; a < x; a++){
		for(int b=0; b < y; b++)
			printf("%i     ", sorteio[a][b]);
		printf("\n");
	}

}
