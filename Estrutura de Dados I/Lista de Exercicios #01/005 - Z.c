#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int r_num, fim;

	printf("> ");
	scanf(" %i",&fim);

	srand(time(NULL));
	r_num = rand() %fim+1;

	if (r_num > 0 && r_num < 10)
		printf("O numero %i tem 1 digito!\n", r_num);
	else if (r_num > 9 && r_num < 100)
		printf("O numero %i tem 2 digitos!\n", r_num);
	else if (r_num > 99 && r_num < 1000)
		printf("O numero %i tem 3 digitos!\n", r_num);
	else if (r_num > 999 && r_num < 10000)
		printf("O numero %i tem 4 digitos!\n", r_num);
}