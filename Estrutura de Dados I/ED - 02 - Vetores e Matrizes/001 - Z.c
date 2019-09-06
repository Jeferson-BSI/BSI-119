#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
	int numb[100], x, cont=0;
	
	srand(time(NULL));
	
	for(int i=0; i<100; i++){
		numb[i] = rand() % 11;
	}

	printf("> ");
	scanf(" %i",&x);

	for(int i=0; i<100; i++){
		if(numb[i] == x);
			cont++;		
	}

	printf("O numero: %i, foi sorteado: %i vezes\n", x, cont);
}