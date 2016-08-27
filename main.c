#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/* run this program using the console pauser or add your own getch, system("pause") or */

int main(int argc, char *argv[])
{
	
	// cria��o das vari�veis
	int matriz[4][4], j=0, k=0;
	
	// busca n�meros aleat�rios
	srand((unsigned)time(NULL));
	
	// imprime uma mensagem na tela
	printf("MATRIZ ORIGINAL:\n\n");
	
	// La�o que varre a linha 
	for(j=0; j<4; j++)
	{
		
		// La�o que varre a coluna
		for(k=0; k<4; k++)
		{
			// Insere um valor rondomico em uma posi��o da matriz
			//matriz[j][k] = rand()%50;
			
			// Insere o indice de coluna na matriz
			matriz[j][k] = k;
			
			// Imprime o valor da posi��o atual da matrix
			printf("%02d ", matriz[j][k]);
		}
		
		// Quebra a linha
		printf("\n");
	}
	
	// Imprime uma mensagem de identifica��o
	printf("\n Os elementos da diagonal principal sao: \n");
	
	// Efetua a varredura da matriz
	for(j=0; j<4; j++)
	{
		
		// Imprime os elemntos da diagonal
		printf("%02d ", matriz[j][j]);
	}
	
	// Imprime uma mensagem de identifica��o
	printf("\nOs elementos restantes da matriz sao: \n");
	
	// La�o que varre a linha 
	for(j=0; j<4; j++)
	{
		
		// La�o que varre a coluna
		for(k=0; k<4; k++)
		{	
			// Se os indices forem iguais (diagonal principal)
			if(j == k)
			{
				printf("-- ");
			}
			else
			{
				// Sen�o, imprime o valor da posi��o atual da matriz
				printf("%02d ", matriz[j][k]);
			}
		}
		
		// Quebra a linha
		printf("\n");
	}
	
	// Retorna 0
	return 0;
}
