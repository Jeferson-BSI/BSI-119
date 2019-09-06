#include <stdio.h>

int main(){
	float nt1, nt2, nt3;
	float media;

	printf("nota 01: ");
	scanf(" %f",&nt1);
	printf("nota 02: ");
	scanf(" %f",&nt2);
	printf("nota 03: ");
	scanf(" %f",&nt3);

	if (nt1 > nt2 && nt1 > nt3)
		media = nt1 * 4 + nt2 * 3 + nt3 * 3;
 	else if (nt2 > nt1 && nt2 > nt3)
		media = nt1 * 3 + nt2 * 4 + nt3 * 3;
	else if (nt3 > nt1 && nt3 > nt2)
		media = nt1 * 3 + nt2 * 3 + nt3 * 4;

	media /= 10;

	printf("\nA média ponderada do aluno é: %.2f",media);

	if (media > 5)
		printf("\nO aluno foi aprovado!\n");
	else
		printf("\nO aluno foi reprovado!\n");

}