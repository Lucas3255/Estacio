#include <stdio.h>
#include <Windows.h>
#include <time.h>

void carregar();

int main ()
{
	int i;		//contador de quebra de linha
	int j;		//contador das bolinhas
	int a;		//contador para o espaçamento
	int tamanho, tronco, escolha;
		
	do {
		printf(" Qual o tamanho a arvore vai ter? \n >> ");
		scanf("%d", &tamanho);
		fflush(stdin);
		system("cls");
		printf("\n");
		tronco = tamanho / 2;
	
		for (i = 0; i <= tamanho - 1; i++) {
			for (a = tamanho; a >= i; a--){
				printf(" ");
			}
			
			for (j = 0; j <= i * 2; j++) {
				printf("*");
			}
			printf("\n");
		}
		
		for (a = 0; a <= tamanho-1; a++){
			printf(" ");
		}
	
		for (j = 0; j <= tronco; j++){
			printf("|");
		}
		sleep(3);
		
		do {
			printf("\n\n-------------------------\nDeseja fazer de novo?");
			printf("\n 1 - Sim\n 2 - Nao\n\n >> ");
			scanf("%d", &escolha);
			fflush(stdin);
			system("cls");
			
			if (escolha == 2){
				system("cls");
				printf(" Encerrando Programa...\n");
				carregar();
				return 0;
			} 
			if (escolha != 1 || escolha != 2){
				system("cls");
				printf(" A opcao %d eh invalida.\n", escolha);
				sleep(3);
				system("pause");
				system("cls");
			}
		}while(escolha != 1, 2);
		
	}while(escolha == 1);
}

void carregar(){
	int i;
	for (i = 0; i <= 2; i++) {
		printf(" o ");
		sleep(1);
	}
}

