#include <stdio.h>

int main(){
	float nt1, nt2, nt3, nt4, nt5, media;

	printf("nota 01: ");
	scanf(" %f",&nt1);
	printf("nota 02: ");
	scanf(" %f",&nt2);
	printf("nota 03: ");
	scanf(" %f",&nt3);
	printf("nota 04: ");
	scanf(" %f",&nt4);
	printf("nota 05: ");
	scanf(" %f",&nt5);

	if (nt1 > nt2 && nt1 > nt3 && nt1 > nt4 && nt1 > nt5){
		
		if (nt2 < nt3 && nt2 < nt4 && nt2 < nt5)
			media = nt3 + nt4 + nt5;
		else if (nt3 < nt2 && nt3 < nt4 && nt3 < nt5)
			media = nt2 + nt4 + nt5;
		else if (nt4 < nt2 && nt4 < nt3 && nt4 < nt5)
			media = nt2 + nt3 + nt5;
		else if (nt5 < nt2 && nt5 < nt3 && nt5 < nt4)
			media = nt2 + nt3 + nt4;

	} else if (nt2 > nt1 && nt2 > nt3 && nt2 > nt4 && nt2 > nt5){
		
		if (nt1 < nt3 && nt1 < nt4 && nt1 < nt5)
			media = nt3 + nt4 + nt5;
		else if (nt3 < nt1 && nt3 < nt4 && nt3 < nt5)
			media = nt1 + nt4 + nt5;
		else if (nt4 < nt1 && nt4 < nt3 && nt4 < nt5)
			media = nt1 + nt3 + nt5;
		else if (nt5 < nt1 && nt5 < nt3 && nt5 < nt4)
			media = nt1 + nt3 + nt4;

	} else if (nt3 > nt1 && nt3 > nt2 && nt3 > nt4 && nt3 > nt5){

		if (nt1 < nt2 && nt1 < nt4 && nt1 < nt5)
			media = nt2 + nt4 + nt5;
		else if (nt2 < nt1 && nt2 < nt4 && nt2 < nt5)
			media = nt1 + nt4 + nt5;
		else if (nt4 < nt1 && nt4 < nt2 && nt4 < nt5)
			media = nt1 + nt2 + nt5;
		else if (nt5 < nt1 && nt5 < nt2 && nt5 < nt4)
			media = nt1 + nt2 + nt4;

	} else if (nt4 > nt1 && nt4 > nt2 && nt4 > nt3 && nt4 > nt5){

		if (nt1 < nt2 && nt1 < nt3 && nt1 < nt5)
			media = nt2 + nt3 + nt5;
		else if (nt2 < nt1 && nt2 < nt3 && nt2 < nt5)
			media = nt1 + nt3 + nt5;
		else if (nt3 < nt1 && nt3 < nt2 && nt3 < nt5)
			media = nt1 + nt2 + nt5;
		else if (nt5 < nt1 && nt5 < nt2 && nt5 < nt3)
			media = nt1 + nt2 + nt3;

	} else if (nt5 > nt1 && nt5 > nt2 && nt5 > nt3 && nt5 > nt4){

		if (nt1 < nt2 && nt1 < nt3 && nt1 < nt4)
			media = nt2 + nt3 + nt4;
		else if (nt2 < nt1 && nt2 < nt3 && nt2 < nt4)
			media = nt1 + nt3 + nt4;
		else if (nt3 < nt1 && nt3 < nt2 && nt3 < nt4)
			media = nt1 + nt2 + nt4;
		else if (nt4 < nt1 && nt4 < nt2 && nt4 < nt3)
			media = nt1 + nt2 + nt3;
	}

	media /= 3;

	printf("\nA media das notas é: %.2f\n", media);
}