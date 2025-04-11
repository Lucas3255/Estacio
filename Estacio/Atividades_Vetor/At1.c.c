#include <stdio.h>
#include <string.h>

int main()
{
	int i, num, maior, menor;
	
	printf("Quantos elementos vai ter o vetor?\n >> ");
	scanf("%d", &num);
	
	int vetor[num];
	
	for (i = 0; i < num; i++){
		printf("\nDigite o %d numero: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	maior = menor = vetor[0];
	
	for (i = 1; i < num; i++){
		if (vetor[i] > maior){
			maior = vetor[i];
		}
		if (vetor[i] < menor){
			menor = vetor[i];
		}
	}
	
	printf("\nO maior num eh %d", maior);
	printf("\nO menor num eh %d", menor);
}
