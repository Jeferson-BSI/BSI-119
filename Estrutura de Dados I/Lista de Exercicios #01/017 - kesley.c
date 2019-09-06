#include <stdio.h>

int main(){
	int x, cont, antecessor, sucessor;

	printf("X > ");
	scanf(" %i",&x);

	for(int b=1; b < x; b++){
		cont=0;

		for(int i=1; i < x; i++){
			if(b % i == 0)
				cont++;
		}

		if(cont == 2)
			antecessor = b;
	}

	// Codigo para determinar o numero primo sucessor
	
	printf("%i\n", antecessor);
	printf("%i\n", sucessor);
}