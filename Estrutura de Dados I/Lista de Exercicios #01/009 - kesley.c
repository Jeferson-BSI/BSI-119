#include <stdio.h>

int main(){
	int a=0, cont;

	printf("Insira um numero negativo para sair");

	while(a >= 0){
		cont = 0;
		
		printf("\n> ");
		scanf(" %i",&a);

		for(int b=1; b < a+1; b++){
			if(a % b == 0)
				cont++;
		}

		if(cont == 2)
			printf("%i é um numero primo\n", a);
		else
			printf("%i NÃo é um numero primo\n", a);
	}
}