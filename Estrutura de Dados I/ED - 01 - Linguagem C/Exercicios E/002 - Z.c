#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int n, t, cont;

	srand(time(NULL));
	n = rand() % 21;
	cont = 1;

	printf("Pensei em um numero entre 0 e 20, tente adivinhar!\n");
	
	do {

		printf("> ");
		scanf(" %i",&t);

		if (n == t)
			printf("Parabéns consegiu acertar!\nVocê tentou %i vezes\n", cont);
		else
			cont++;

	} while(n != t);
}