#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
	int sorteio[15];
	
	srand(time(NULL));

	// Faz o primeiro sorteio
	sorteio[0] = 1 + rand() % 25;
	
	// Laço for para o sorteio dos numeros
	for(int x=1; x < 15; x++){
		sorteio[x] = 1 + rand() % 25;
		
		// Laço para a verificação dos numeros anteriores 
		for(int y=0; y < x; y++)
			if(sorteio[y] == sorteio[x])
				sorteio[x] = 1 + rand() % 25;
	}

	// Laço para mostrar os numeros sorteados
	printf("Os numeros do sorteio foram: \n"); 
	for(int x=0; x < 15; x++)
		printf(" > %i\n", sorteio[x]);
}