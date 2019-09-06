#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
	int pares=0, impares=0, soma=0, acima_media=0;
	int tamanho, x, y, aux;
	float media;

	printf("Insira a quantidade de numeros a ser sorteado: ");
	scanf(" %i",&tamanho);

	int numeros[tamanho];

	printf("X > ");
	scanf(" %i",&x);

	printf("Y > ");
	scanf(" %i",&y);

	// Gera os numeros aleatórios
	srand(time(NULL));
	for(int i=0; i < tamanho; i++){
		numeros[i] = x + rand() % (y + 1 - x);
	}

	// Laço para somar os numeros e contar os pares e impares
	for (int i = 0; i < tamanho; ++i){
		if(numeros[i] % 2 == 0)
			pares++;
		else
			impares++;

		soma += numeros[i];
	}

	media = (float)soma / tamanho;

	// ordena o vetor
	for(int a=0; a < tamanho; a++){
		for(int b=0; b < tamanho; b++){
			if(numeros[a] < numeros[b]){

				aux = numeros[a];
				numeros[a] = numeros[b];
				numeros[b] = aux;
			}
		}
	}

	// Contador de numeros acima da média
	for(int i=0; i < tamanho; i++){
		if(media > numeros[i])
			acima_media++;
	}

	printf("Foi contado %i numeros pares\n", pares);
	printf("Foi contado %i numeros impares\n", impares);
	printf("A média dos numeros sorteados é %.2f\n", media);
	printf("O menor numero se encontra na posição 0\n");
	printf("O maior numero se encontra na posição %i\n", tamanho-1);
	printf("Existem %i numeros acima da média\n", acima_media);
}
