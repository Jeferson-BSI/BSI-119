#include <stdio.h>

int main (){
	float a;
	float b;
	float c;

	printf("> ");
	scanf(" %f",&a);

	printf("> ");
	scanf(" %f",&b);

	c = a * b;

	printf("Produto = %.2f\n", c);
}