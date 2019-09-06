#include <stdio.h>

int main(){
	char cpf[11];
	int int_cpf[11], val, dig_1, dig_2;

	printf("Insira um CPF: ");
	scanf(" %s", cpf);

	// transforma char em int
	for(int i=0; i < 11; i++){
		int_cpf[i] = cpf[i] - 48;
	}

	int soma=0;

	// Primeira digito
	for(int x=0; x < 9; x++){
		soma += int_cpf[x] * (10 - x);
	}

	val = soma % 11;

	if(val < 2)
		dig_1 = 0;
	else
		dig_1 = 11 - val;

	if(dig_1 != int_cpf[9])
		printf("Primeiro digito verificador inválido!\n");

	soma=0;

	// Segundo digito
	for(int y=0; y < 10; y++){
		soma += int_cpf[y] * (11 - y);
	}

	val = soma % 11;


	if(val < 2)
		dig_2 = 0;
	else
		dig_2 = 11 - val;

	if(dig_2 != int_cpf[10])
		printf("Segundo digito verificador inválido!\n");

	if(dig_1 == int_cpf[9] && dig_2 == int_cpf[10])
		printf("CPF inserido válido\n");


}
