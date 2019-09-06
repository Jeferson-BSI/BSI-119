#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// bugado

int main(){
	int a, fim, x;

	printf("> ");
	scanf(" %i",&fim);

	srand(time(NULL));
	fim++;
	a = rand() % fim;

	printf("Foi gerado o numero %i\n",a);

	for (x = 0; x < a; x++){
		if (a % x == 0){
			printf("é um numero primo");
		} else {
			printf("não é um numero primo");
		}
	}
}