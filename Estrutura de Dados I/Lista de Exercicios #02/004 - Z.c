#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
	int n, troca, aux1, aux2, aux3;

	printf("> ");
	scanf(" %i",&n);

	int cartas[n];

	srand(time(NULL));
	for(int i=0; i < n; i++)
		cartas[i] = i+1;

	for (int i = 0; i < n; i++){
		troca = rand() % n;

		aux1 = cartas[i];
		aux2 = cartas[troca];

		cartas[i] = aux2;
		cartas[troca] = aux1;
	}

	// mostra a sequencia de cartas embaralhadas
	printf(" - Sequencia Embaralhadas - \n");
	for (int i = 0; i < n; i++){
		printf("%i\n", cartas[i] );
	}

	// Organiza as cartas
	for (int i = 0; i < n; i++){
		for(int j=0; j < n; j++){
			if(cartas[i] < cartas[j]){

				aux3 = cartas[i];
				cartas[i] = cartas[j];
				cartas[j] = aux3;
			}
		}
	}

	// mostra a sequencia de cartas ordenadas
	printf(" - Sequencia Ordenada - \n");
	for (int i = 0; i < n; i++){
		printf("%i\n", cartas[i] );
	}

}
