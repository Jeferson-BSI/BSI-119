#include <stdio.h>

int main(){
	double peso, altura, imc;


	printf("peso: ");
	scanf(" %lf",&peso);
	printf("altura: ");
	scanf(" %lf",&altura);

	imc = peso / (altura * altura);

	if (imc < 18.5)
    		printf("Vocês está Abaixo do peso ideal\n");

	else if (imc <= 25)
	    	printf("Vocês está no peso ideal\n");

	else if (imc <= 30)
	    	printf("Vocês está no estado de sobrepeso\n");

	else if (imc <= 40)
	    	printf("Vocês está no estado de obesidade\n");

	else if (imc > 40)
	    	printf("Vocês está no estado de obesidade morbida\n");
}
