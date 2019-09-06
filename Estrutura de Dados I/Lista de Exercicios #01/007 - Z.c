#include <stdio.h>

int main(){
	int x, y, fim, cont;

	printf("> ");
	scanf(" %i",&x);

	fim = x;
	y = 1;
	cont = 0;

	for(int a=0; a < x; a++)
		printf(" ");
	
	printf("*\n");
	x--;

	while (x > 0){
		for(int a=0; a < x; a++)
			printf(" ");

		printf("*");

		for(int a=0; a < y; a++)
			printf(" ");
		
		printf("*\n");
		
		y += 2;
		x--;
	}

	// Linha Final
	for(int a=0; a < fim; a++){
		printf("* ");
	}

	printf("*\n");
}