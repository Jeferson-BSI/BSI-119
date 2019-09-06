#include <stdlib.h>
#include <gconio.h>
#include <time.h>

int main(){
	int score, score_maximo, passos, cont_passos, dificuldade, motivo;
	int pa, altura, largura, x, y, a, b, mx, my;
	int comida, fx, fy;
	char tecla;

	//Define a semente
	srand(time(NULL));

	// Pega a largura e altura do terminal
	altura = get_screen_rows();
	largura = get_screen_columns();
	
	// Define a cor de fundo da tela inteira para branco!
	textcolor(0);
	textbackground(7);

	clrscr();

	// coordenadas dos menus
	mx = largura / 8;
	my = altura / 4;
	
	// Mostra a mensagem de Boas vindas para o jogador!
	gotoxy(mx, my);
	printf("Bem vindo ao jogo Snake!");
	
	gotoxy(mx + 5, my + 4);
	printf("Aperte espaço para continuar...");

	// Laço para verificar se a pessoa digitou espaço
	while(1){
		tecla = getch();

		if(tecla == ' ')
			break;
	}
	
	clrscr();

	// Mostra as intruções de como jogar para o jogador
	gotoxy(mx, my);
	printf("intruções:");
	gotoxy(mx + 5, my + 2);
	printf("w - cima");
	gotoxy(mx + 5, my + 3);
	printf("s - baixo");
	gotoxy(mx + 5, my + 4);
	printf("a - esquerda");
	gotoxy(mx + 5, my + 5);
	printf("d - direita");

	gotoxy(mx, my + 7);
	printf("Aperte espaço para continuar...");

	// Laço para verificar se a pessoa digitou espaço
	while(1){
		tecla = getch();

		if(tecla == ' ')
			break;
	}

	clrscr();

	do {
		// Seleciona a dificuldade do jogo
		gotoxy(mx, my);
		printf("Dificuldade: ");
		gotoxy(mx + 5, my + 2);
		printf("[ 1 ] - Fácil");
		gotoxy(mx + 5, my + 3);
		printf("[ 2 ] - Médio");
		gotoxy(mx + 5, my + 4);
		printf("[ 3 ] - Dificil");
		gotoxy(mx + 5, my + 5);
		printf("[ 4 ] - Insano");

		// Laço while para pedir o numero da dificuldade,
		// verificar se o numero está correto caso não esteja 
		// pedir novamente e modificar a dificuldade do jogo.
		while(1){
			gotoxy(mx, my + 9);
			printf("Insira um numero de acordo com a dificuldade desejada: ");
			tecla = getch();
			
			if(tecla == '1'){
				passos = (altura * largura) / 30;
				score_maximo = 100;
				dificuldade = 1;
				break;
			} else if(tecla == '2'){
				passos = (altura * largura) / 40;
				score_maximo = 200;
				dificuldade = 2;
				break;
			} else if(tecla == '3'){
				passos = (altura * largura) / 60;
				score_maximo = 400;
				dificuldade = 3;
				break;
			} else if(tecla == '4'){
				passos = (altura * largura) / 100;
				score_maximo = 800;
				dificuldade = 4;
				break;
			}

			gotoxy(mx, my + 7);
			printf("Numero inserido Inválido!");
		}

		clrscr();

		// Posição dos Menus
		a = 10;
		b = 2;

		// Posição Inicial do jogador
		x = 5;
		y = altura / 2;

		//Posição Inicial da fruta
		fx = 5 + (rand() % (largura - 11));
		fy =  4 + (rand() % (altura - 12));

		gotoxy(fx, fy);
		printf("&");

		// Define o Score Padrão
		score = 0;

		// Define o contador de passos
		cont_passos = 0;

		while(1){
			// soma o contador de passos
			cont_passos++;
			
			// Mostra o jogador
			gotoxy(x, y);
			printf("*");

			// Mostra a fruta
			gotoxy(fx, fy);
			printf("&");

			// Define as linhas horizontais
			for(int a=5; a < largura-5; a++){
				gotoxy(a, 4);
				printf("-");
				gotoxy(a, altura - 4);
				printf("-");
			}

			//define as linhas verticais
			for(int b=4;b<=altura -4 ;b++){
				gotoxy(3,b);
				printf("|");
				gotoxy(largura - 5,b);
				printf("|");
			}

			// Mostra score, dificuldade e creditos
			gotoxy(a, b+1);
			printf("Score: %i", score);

			// condição para mostrar a dificuldade selecionada 
			gotoxy(a, b);

			if(dificuldade == 1)
				printf("Dificuldade: Fácil");
			else if(dificuldade == 2)
				printf("Dificuldade: Médio");
			else if(dificuldade == 3)
				printf("Dificuldade: Dificil");
			else if(dificuldade == 4)
				printf("Dificuldade: Insano");

			// Mostra os créditos do desenvolvedor(no caso eu)
			gotoxy(largura - 40, altura - 2);
			printf("Desenvolvido por Zorgga");	
			
			// Verifica a tecla pressionada pelo jogador e move o snake 
			tecla = getch();

			if(tecla == 'w')
				y--;
			else if(tecla == 's')
				y++;
			else if(tecla == 'a')
				x--;
			else if(tecla == 'd')
				x++;

			// Define a posição da fruta com base na dificuldade
			if (cont_passos == passos){
				fx = 7 + (rand() % (largura - 14));
				fy =  7 + (rand() % (altura - 14));

				cont_passos = 0;
			}

			// Define a posição da fruta e o score caso o jogador chegue nela
			if (x == fx && y == fy){
				fx = 7 + (rand() % (largura - 14));
				fy =  7 + (rand() % (altura - 14));

				score += 10;
				cont_passos = 0;
			}
			
			// Condições de saida
			if(score == score_maximo){
				motivo = 0;
				break;
			}

			if(x == 3){
				motivo = 1;
				break;
			} 
			if(x == largura - 6){
				motivo = 2;
				break;
			}

			if(y == 4){
				motivo = 3;
				break;
			}

			if(y == altura - 4){
				motivo = 4;
				break;
			}

			clrscr();

			// Conição para teclas Maiusculas
			if(tecla == 'W'){
				gotoxy(largura - 45, b);
				printf("ERRO: Para se movimentar corretamente");
				gotoxy(largura - 35, b + 1);
				printf("desligue o Capslock");
			} else if(tecla == 'S'){
				gotoxy(largura - 45, b);
				printf("ERRO: Para se movimentar corretamente");
				gotoxy(largura - 35, b + 1);
				printf("desligue o Capslock");
			} else if(tecla == 'A'){
				gotoxy(largura - 45, b);
				printf("ERRO: Para se movimentar corretamente");
				gotoxy(largura - 35, b + 1);
				printf("desligue o Capslock");
			} else if(tecla == 'D'){
				gotoxy(largura - 45, b);
				printf("ERRO: Para se movimentar corretamente");
				gotoxy(largura - 35, b + 1);
				printf("desligue o Capslock");
			}
		}

		clrscr();

		// Mostra os créditos finais
		gotoxy(mx, my);

		if (motivo == 0)
			printf("Winner Winner Chicken Dinner");
		else
			printf("Game Over");

		// Mostra o motivo de saida da gameplay
		gotoxy(mx + 5, my + 2);
		printf("Motivo: ");
		
		if (motivo == 0)
			printf("Conseguiu alcançar o score.");
		else if(motivo == 1)
			printf("Atropelar parede no canto esquerdo!");
		else if(motivo == 2)
			printf("Atropelar parede no canto direito!");
		else if(motivo == 3)
			printf("Atropelar parede superior!");
		else if(motivo == 4)
			printf("Atropelar parede inferior!");

		gotoxy(mx, my + 6);
		printf("Aperte espaço para continuar...");

		while(1){
			tecla = getch();

			if(tecla == ' ')
				break;
		}
		
		clrscr();			

		
		while(1){
			gotoxy(mx, my);
			printf("Deseja jogar novamente? [S/N]: ");
			pa = getch();

			if(pa == 'S' || pa == 's' || pa == 'N' || pa == 'n'){
				break;
			} else {
				gotoxy(mx + 5, my + 2);
				printf("Insira [S/N] para continuar...");
			}

		}
		
		if(pa == 'S' || pa == 's'){
			clrscr();
			continue;			
		} else {
			break;
		}

	} while(1);
	
	gotoxy(1, 1);
	clrscr();
}