#include <stdio.h>

int main(){
	int atual, anterior, fib;
	int valor, cont;
	double maior, menor, div;

	printf("> ");
	scanf(" %i",&valor);

	anterior = cont = 0;
	atual = 1;

	while(cont != 2){
		fib = atual + anterior;
		anterior = atual;
		atual = fib;

		if (fib > valor){
			printf("%i, ",fib);
			cont++;
		}

		if (cont == 1)
			menor = fib;
		else if (cont == 2)
			maior = fib;
	}
	
	div = maior / menor;

	printf("\nA divisão dos numeros resulta em: %.2f\n", div);
}