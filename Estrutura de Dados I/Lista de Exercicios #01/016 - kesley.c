#include <stdio.h>

int main(){
	int x, y, cont;

	printf("X: ");
	scanf(" %i",&x);
	printf("Y: ");
	scanf(" %i",&y);

	for(x ; x < y+1; x++){
		cont=0;

		for(int i=1; i < x+1; i++){
			if(x % i == 0)
				cont++;
		}

		if(cont == 2)
			printf("%i\n", x);
	}
}
