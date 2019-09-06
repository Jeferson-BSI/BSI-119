#include <stdio.h>

// - PQP esse código me deu um trabalho ;)

int main(){
	float valor, notas;
	int cem, cinquenta, vinte, dez, cinco, dois, um, total;

	printf("Insira a quantidades de notas que você deseja sacar: ");
	scanf(" %f",&valor);

	notas = cem = cinquenta = vinte = dez = cinco = dois = um = 0;

	while (notas < valor){
	
		if (notas + 100 <= valor) {
			notas += 100;
			cem += 1;
		} else if (notas + 50 <= valor){
			notas += 50;
			cinquenta += 1;
		} else if (notas + 20 <= valor){
			notas += 20;
			vinte += 1;
		} else if (notas + 10 <= valor){
			notas += 10;
			dez += 1;
		} else if (notas + 5 <= valor){
			notas += 5;
			cinco += 1;
		} else if (notas + 2 <= valor){
			notas += 2;
			dois += 1;
		} else if (notas + 1 <= valor){
			notas += 1;
			um += 1;
		}
	}

	total = cem + cinquenta + vinte + dez + cinco + dois + um;
	
	printf("\nNotas de Cem: %i\nNotas de Cinquenta: %i\nNotas de Vinte: %i\n", cem, cinquenta, vinte);
	printf("Notas de Dez: %i\nNotas de Cinco: %i\nNotas de Dois %i\n", dez, cinco, dois);
	printf("Notas de Um: %i\n\nTotalizando em uma quantidade minima de %i Notas\n", um, total);
}