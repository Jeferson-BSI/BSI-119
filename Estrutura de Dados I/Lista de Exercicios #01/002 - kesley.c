#include <stdio.h>

int main(){
	int x, y, soma, sla;

	do{
		printf("Insira dois numeros: \n");
		printf("x > ");
		scanf(" %i",&x);

		y -= x;
		soma = 0;

		do{
			printf("y > ");
			scanf(" %i",&y);
		} while(y < x);

		printf("%i\n\n", soma);

		soma = x + y;

		while (x < y){
			x++;
			y--;

			if (x != y)
				soma += x + y;
			else
				soma += x;
		}

		if (soma > 0)
			printf("%i\n", soma );

	} while(x > 0 && y > 0);
}