#include <stdio.h>

int main(){
	int tempo, hora, min, seg;

	printf("Insira o tempo de evento em segundos: ");
	scanf(" %i",&tempo);

	// Divide a quantidade total de segundos pela quantidade total de segundos em um hora
	hora = tempo / 3600;
	
	// diminui a quantidade de segundos por hora pelo total de segundos e divide por 60
	min = (tempo - hora * 3600) / 60; 

	seg = tempo - (min * 60 + hora * 3600);

	printf("%ih:%im:%is\n",hora, min, seg );

}