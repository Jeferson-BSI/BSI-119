#include <stdio.h>

int main(){
	int a=0, soma=0;

	printf("\n> ");
	scanf(" %i",&a);

	for(int b=1; b < a; b++){
		if(a % b == 0)
			soma += b;
	}

	if(soma == a)
		printf("Esse é um numero perfeito!\n");
}
