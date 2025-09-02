#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main ()
{
	int numVogais, escolha, i, j;
	char vogais[] = "aeiouAEIOU";
	char palavra[100];
	
	do {
		system("cls");
		printf(" Escreva alguma palavra: ");
		scanf("%s", &palavra);
		fflush(stdin);
		
		for (i = 0; palavra[i] != '\0'; i++){
			for (j = 0; vogais[j] != '\0'; j++){
				if (vogais[j] == palavra[i]){
					numVogais += 1;
				}
			}
		}
		
		system("cls");
		printf(" A palavra '%s' tem %d vogais.\n\n", palavra, numVogais);
		system("pause");
		
		do {
			system("cls");
			printf(" Voce quer ver outra palavra?\n 1 - Sim\n 2 - Nao\n\n >> ");
			scanf("%d", &escolha);
			fflush(stdin);
			if (escolha != 1 && escolha != 2){
				system("cls");
				printf(" A opcao %d eh invalida!");
				sleep(3);
			}
		}while(escolha != 1 && escolha != 2);
		numVogais = 0;
	}while(escolha == 1);
	
	return 0;
}
