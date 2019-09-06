#include <stdio.h>

int main(){
	float preco;
	float valor;
	float total;

	printf("Preço > ");
	scanf("%f",&preco);
	printf("Valor > ");
	scanf("%f",&valor);

	total = valor / preco;

	printf("%.1f Litros\n", total);
}