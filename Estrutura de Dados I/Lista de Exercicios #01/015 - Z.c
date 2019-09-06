#include <stdio.h>

int main(){
	int x, soma=0;

	printf("> ");
	scanf(" %i",&x);

	for(int i=1; i < x; i++){
		if(i % 2)
			soma += i;

		if(soma == x){
			printf("%i é um quadrado perfeito!\n", x);
			break;
		} else if(soma > x){
			printf("%i NÃo é um quadrado perfeito!\n", x);
			break;
		}
	}
}