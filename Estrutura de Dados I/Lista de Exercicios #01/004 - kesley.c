#include <stdio.h>

int main(){
	int a,b,c;

	printf("Insira 3 comprimentos de caibro de madeira\n");
	printf("> ");	
	scanf(" %i",&a);
	printf("> ");	
	scanf(" %i",&b);
	printf("> ");	
	scanf(" %i",&c);

	if (b - c < a && b + c > a && a - c < b && a + c > b && a - b < c && a + b > c)
		printf("Estas retas formam um triangulo!\n");	
	else 
		printf("As retas informadas não formam um triangulo.\n");
}