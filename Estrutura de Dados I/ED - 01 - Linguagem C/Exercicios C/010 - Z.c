#include <stdio.h>

int main(){
	float custo_inicial, custo_final;
	int dist, imposto;

	printf("Custo Inicial: ");
	scanf(" %f",&custo_inicial);
	printf("Porcentagem do Distribuidor: ");
	scanf(" %i",&dist);
	printf("Porcenagem do Imposto: ");
	scanf(" %i",&imposto);

	custo_final = custo_inicial + (custo_inicial * dist / 100) + (custo_inicial * imposto / 100);

	printf("custo final: R$%.2f\n",custo_final );

}