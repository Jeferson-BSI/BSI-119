#include <stdio.h>

int main(){
	int a, b;

	printf("> ");
	scanf(" %i",&a);
	printf("> ");
	scanf(" %i",&b);

	if (a % b) // Se o resultado for diferente de zero a condição é verdadeira
		printf("%i Não é divisivel por %i\n", a, b);
	else
		printf("%i é divisivel por %i\n", a, b);
}