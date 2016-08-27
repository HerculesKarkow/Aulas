#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/* run this program using the console pauser or add your own getch, system("pause") or */

int main(int argc, char *argv[])
{
	
	// criação das variáveis
	int matriz[4][4], j=0, k=0;
	
	// busca números aleatórios
	srand((unsigned)time(NULL));
	
	// imprime uma mensagem na tela
	printf("MATRIZ ORIGINAL:\n\n");
	
	// Laço que varre a linha 
	for(j=0; j<4; j++)
	{
		
		// Laço que varre a coluna
		for(k=0; k<4; k++)
		{
			// Insere um valor rondomico em uma posição da matriz
			matriz[j][k] = rand()%50;
			
			// Imprime o valor da posição atual da matrix
			printf("%02d ", matriz[j][k]);
		}
		
		// Quebra a linha
		printf("\n");
	}
	
	// Retorna 0
	return 0;
}
