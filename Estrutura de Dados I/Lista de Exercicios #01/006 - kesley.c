#include <stdio.h>

int main(){
	char a, b;
	int mult;

	printf("> ");
	scanf(" %hhd",&a);
	printf("> ");
	scanf(" %hhd",&b);

	mult = a * b;

	printf("%i\n",mult);
}