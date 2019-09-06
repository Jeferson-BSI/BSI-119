#include <stdio.h>

int main(){
	int a, b, c;
	double media;

	printf("> ");
	scanf(" %i",&a);
	printf("> ");
	scanf(" %i",&b);
	printf("> ");
	scanf(" %i",&c);

	media = ((float)a + b + c) / 3;

	printf("\nMedia: %.2f\n", media);
}