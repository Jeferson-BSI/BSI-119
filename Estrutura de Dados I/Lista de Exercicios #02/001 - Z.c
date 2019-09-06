#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
	int q, t;

	printf("Insira a quantidade de numeros para sortear: ");
	scanf(" %i",&q);
	printf("Insira até que numero deverá ser sorteado: ");
	scanf(" %i",&t);

	int vetor[q];

	srand(time(NULL));

	for(int x=0; x < q; x++){
		vetor[x] = rand() % t+1;
	}

	for(int x=0; x < q; x++){
		printf("%i", vetor[x]);

		for(int y=0; y < x; y++){
			if (vetor[y] == vetor[x]){
				printf(" *");
				break;
			}
		}

		printf("\n");
	}
}
