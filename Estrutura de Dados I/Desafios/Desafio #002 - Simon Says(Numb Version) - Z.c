#include <stdlib.h>
#include <gconio.h>
#include <stdio.h>
#include <time.h>

//saimon says com até 5 numeros de 0 a 20;

int main(){
	int simon[5], player, cont = 0, cont_s = 0, sair, t;

	srand(time(NULL));

	for(int a=0; a < 5; a++){
		simon[a] = rand() % 20;
		// printf("%d\n",a );
	}

	while(1){
		for(int a=0; a < cont; a++){
			printf("\nSimon Says: %i", simon[a]);
		}

		cont_s = 0;
		for(int a=0; a < cont; a++){
			printf("You say > ");
			scanf(" %i",&player);
			
			if(player != simon[cont_s])
				sair = 0;

			cont_s++;
		}

		if(cont == 5)
			break;

		if(sair == 0)
			break;

		cont++;
	}

	if(cont == 5)
		printf("Párabens você conseguiu imitar o simon perfeitamente!\n");
	else
		printf("Acho que o simon ganhou de você não é mesmo?\n");
}