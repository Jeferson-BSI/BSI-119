#include <stdio.h>

int main(){
	int x, a, b, c, teste;

	printf("> ");
	scanf(" %i",&x);

	for(int i=1; i < x; i++){
		a = i;
		b = i+1;
		c = i+2;

		teste = a*b*c;

		if(teste == x){
			printf("%i * %i * %i = %i\n", a, b, c, x);
			printf("Este é um numero triangular\n");
			break;
		}
	}
}