#include <stdlib.h>
#include <stdio.h>
#include <time.h>

// Em processo

int main(){
	int x, y, vetor[50];

	printf("Insira o tamanho do vetor X: ");
	scanf(" %i",&x);
	printf("Insira o tamanho do vetor Y: ");
	scanf(" %i",&y);

	srand(time(NULL));

	// Define vetores de tamanho X e Y
	int vetor1[x], vetor2[y];

	// Randomiza numeros inteiros diferentes no vetor1
	for(int i=0; i < x; i++){
		vetor1[i] = rand() % (x + y + 1);

		for(int j=0; j < i; j++){
			if(vetor1[j] == vetor1[i])
				vetor1[i] = rand() % (x + y + 1);
		}
	}

	// Randomiza numeros inteiros diferentes no vetor2
	for(int i=0; i < x; i++){
		vetor2[i] = rand() % (x + y + 1);

		for(int j=0; j < i; j++){
			if(vetor2[j] == vetor2[i])
				vetor2[i] = rand() % (x + y + 1);
		}
	}

	// Mostra os vetores
	printf("\n - Vetor 1 - \n");
	for(int i=0; i < x; i++){
		printf("%i\n", vetor1[i]);
	}

	printf("\n - Vetor 2 - \n");
	for(int i=0; i < y; i++){
		printf("%i\n", vetor2[i]);
	}
}
