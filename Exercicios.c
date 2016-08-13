#include<stdio.h>

void main(void)
{
	int num = 0, fatorial = 1;
	printf("#######################################################\n");
	printf("##### Digite um numero inteiro positivo: ##############\n");
	printf("#######################################################\n");
	
	scanf("%i", &num);
	
	int i = 0;
	for(i=0;i<num;i++)
	{
		fatorial = fatorial * (num - i);
	}
	
	printf("O resultado de fatorial de %i! eh %i", num, fatorial);
}
