#include <stdio.h>
#include <string.h>
#include <conio.h>

int main ()
{
	char nome[30], sobre[30];
	
	printf("Informe o nome: ");
	gets(nome);
	printf("e o sobrenome: ");
	gets(sobre);
	
	strcat(nome, " ");
	strcat(nome, sobre);
	
	printf("Seu nome completo eh %s", nome);
	getch();
	return 0;
}