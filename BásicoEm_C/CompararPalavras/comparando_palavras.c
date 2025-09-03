#include <stdio.h>
#include <string.h>

int main ()
{
	char palavra1[30], palavra2[30];
	int comp;	//comp = variavel que recebe 'comparar'
	int loop = 1;
	
	do{
		printf("Qual a primeira palavra: ");
		gets(palavra1);
		printf("e a segunda: ");	
		gets(palavra2);
	
		comp = strcmp(palavra1, palavra2);
		
		if (comp == 0){
			printf("As palavras sao iguais\n");
		}
	
		if (comp > 0){
			printf("A palavra 1 eh maior q a 2\n");
		}
	
		if (comp < 0){
			printf("A palavra 1 eh menor que a 2\n");
		}
	}while(loop == 1);
		
	return 0;
	
}