#include <stdio.h>
#include <string.h>

int main ()
{
	char email[100], nome [100], interesse [1000];
	int tamanho;
	
	printf(" Qual o seu nome?\n >> ");
	gets(nome);
	printf("\nPrazer %s, eu sou a Lorena.", nome);
	
	printf("\n\n Digite o seu email:\n >> ");
	fgets(email, 21, stdin);
	
	tamanho = strlen(email);
	
	printf("Oq vc gosta de fazer?\n >> ");
	fgets(interesse, 1000, stdin);
	
	printf("\n\nSeu nome eh %s", nome);
	printf("\nO email %s tem %d caracteres.", email, tamanho);
	printf("\nVoce gosta de: %s", interesse);
	
	return 0;
}