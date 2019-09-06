#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
	int k, x, mult=1;

	printf("Insira a quantidade de valore a sortear: ");
	scanf(" %i",&k);

	do{
		printf("Insira o intervalo final do sorteio: ");
		scanf(" %i",&x);
	} while(x <= k);

	int vetor1[k], vetor2[k];
	srand(time(NULL));

	// Laço para randomizar os numeros
	for(int a=0; a < k; a++){
		// impede que seja sorteados numeros iguais
		do{
			vetor1[a] = rand() % (x + 1);
			vetor2[a] = rand() % (x + 1);
		} while(vetor1[a] == vetor2[a]);

		// laço para randomizar o numero caso ele já exista no vetor
		for(int b=0; b < a; b++){
			while(1){
				if(vetor1[a] == vetor1[b])
					vetor1[a] = rand() % (x + 1);

				if(vetor2[a] == vetor2[b])
					vetor2[a] = rand() % (x + 1);
				else
					break;
			}
		}
	}

	// mostra os valores sorteados
	printf(" - Vetor 01 - \n");
	for (int i = 0; i < k; ++i){
		printf("%i\n", vetor1[i]);
		mult = mult * vetor1[i];
	}

	printf("\n - Vetor 02 - \n");
	for (int i = 0; i < k; ++i){
		printf("%i\n", vetor2[i]);
		mult = mult * vetor2[i];
	}

	printf("O resultado da multiplicação dos dois vetores é: %i\n", mult);
}
