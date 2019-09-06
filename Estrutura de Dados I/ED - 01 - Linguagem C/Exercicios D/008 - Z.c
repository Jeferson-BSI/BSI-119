#include <stdio.h>

int main(){
	int dia, mes, ano;

	printf("dia > ");
	scanf(" %d",&dia);
	printf("mes > ");
	scanf(" %d",&mes);
	printf("ano > ");
	scanf(" %d",&ano);
	
	if (mes == 2){
		if (ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0)){
			if (dia == 29){
				mes++;
				dia = 1;
			}
		} else if (dia == 28){
			mes++;
			dia = 1;
		}
	} else if (dia == 30){
	
		if (mes == 3 || mes == 6 || mes == 9 || mes == 11){
			mes++;
			dia = 1;
		}
	} else if (dia == 31){

		if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
			mes++;
			dia = 1;
		} 	
	} else {
		dia++;
	}

	printf("%i/%i/%i\n",dia, mes, ano);

}	