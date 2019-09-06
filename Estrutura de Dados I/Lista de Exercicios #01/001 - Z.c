#include <stdio.h>

int main(){
	int quant_par, quant_impar;
	int a, soma, maior, menor;
	float perc_par, perc_impar;
	float media, quant;

	a = maior = quant = quant_par = quant_impar = 0;
	menor = 999*999*999;

	do {
		printf("> ");
		scanf(" %d",&a);

		if (a < 0)
			break;

		quant++;
		soma += a;
		media = (float)soma / quant;

		if (a > maior)
			maior = a;

		if (a < menor)
			menor = a;

		if (a % 2 == 0)
			quant_par++;
		else
			quant_impar++;

		perc_par = (quant_par * 100) / quant;
		perc_impar = (quant_impar * 100) / quant;

	} while(a);

	printf("\nA soma dos numeros lidos é: %i", soma);
	printf("\nA média dos numeros lidos é: %.2f", media);
	printf("\nO maior valor informado foi: %i", maior);
	printf("\nO menor valor informado foi: %i", menor);
	printf("\n%.1f%% dos numeros informados são pares.", perc_par);
	printf("\n%.1f%% dos numeros informados são impares.\n", perc_impar);
}
