/*1) Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade
dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e o mês com 30 dias.
Exemplo: Lucas tem 23 anos, 4 meses e 10 dias. Quantos dias de vida ele tem?*/

#include <stdio.h>

int main ()
{
	int ano, mes, dia, total;
	
	printf("Quantos anos vc tem?");
	scanf("%d", &ano);
	printf("\nQuantos mes vc tem?");
	scanf("%d", &mes);
	printf("\nE os dia vc tem?");
	scanf("%d", &dia);
	
	ano *= 365;
	mes *= 30;
	total = ano + mes + dia;
	
	printf("Vc esta vivo(a) ha %d dias. Parabens por estar vivo :)", total);
	
	return 0;
}

