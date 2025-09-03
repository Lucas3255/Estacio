#include <stdio.h>
#include <string.h>

int main ()
{
	char nome[50], sobre[50], aux[50];
	
	printf("Qual o seu nome: ");
	gets(nome);
	printf("E o seu sobrenome: ");
	gets(sobre);
	
	//trocar a ordem dos nomes
	strcpy(aux, nome);
	strcpy(nome, sobre);
	strcpy(sobre, aux);
	
	printf("\nO seu nome eh %s\n", nome);
	printf("Seu sobrenome eh %s", sobre);
	
	return 0;
}