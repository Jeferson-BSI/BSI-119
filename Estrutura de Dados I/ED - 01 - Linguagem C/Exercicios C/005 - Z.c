#include <stdio.h>

int main(){
	// Declara as variáveis
	int cinco, dez, vinte_cinco, cinquenta, real, total;
	float total_reais;

	// Pede as informações 
	printf("Cinco > ");
	scanf(" %i",&cinco);
	
	printf("Dez > ");
	scanf(" %i",&dez);
	
	printf("Vinte e Cinco > ");
	scanf(" %i",&vinte_cinco);
	
	printf("Cinquenta > ");
	scanf(" %i",&cinquenta);
	
	printf("Um real > ");
	scanf(" %i",&real);

	// converte as informações de quantidade para os valores em centavos e soma tudo
	total = cinco * 5 + dez * 10 + vinte_cinco * 25 + cinquenta * 50 + real * 100;

	// Converte os valores somados em tipo float e transforma em reais
	total_reais = (float)total / 100;

	// mostra o resultado final
	printf("\nR$%.2f\n", total_reais);
}