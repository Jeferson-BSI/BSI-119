#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int a, r; //Define a variável de tamanho e variavel para receber os valores randomicos

	printf("> ");
	scanf(" %i",&a);

	srand(time(NULL)); //define como "seed" o tempo atual da maquina 
	
	for (int x = 0; x < a; x++){ // laço for para a quantidade de numeros desejadas
		r = rand() % 51; // define a variavel r com um numero randomico de 0 a 50. 
		printf("%i\n",r);
	}
}