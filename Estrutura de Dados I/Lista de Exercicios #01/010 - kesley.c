#include <stdio.h>

int main(){
	int menu, altura, largura;

	printf("Insira uma das opções no menu abaixo:");

	while(menu != 5){
		printf("\n1 - Área de Retângulo");
		printf("\n2 - Área de Trapézio");
		printf("\n3 - Área de Triângulo");
		printf("\n4 - Área de Círculo");
		printf("\n5 - Sair");

		printf("\n\nSua opção: ");
		scanf(" %i",&menu);

		switch(menu){
			case 1:
				printf("Altura: ");
				scanf(" %i",&altura);
				printf("Largura: ");
				scanf(" %i",&largura);
				printf("A área do retangulo é de: %i\n",altura * largura);
				break;
			case 2:
				printf("Calcula a area do trapezio\n");
				break;
			case 3:
				printf("Calcula a area do triangulo\n");
				break;
			case 4:
				printf("calcula a area do circulo\n");
				break;
		}		

	}
}