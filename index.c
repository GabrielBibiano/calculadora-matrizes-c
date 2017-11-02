# include <stdio.h>
# include "myLib.h"

int main () {
	int menuResponse;
	boasVindas();
	// Chama o menu principal do programa
	menuPrincipal();

	// Recebe a opcao escolhida do usuário
	printf("\nDigite aqui ==>> ");
	scanf("%d", &menuResponse);

	if( menuResponse != 1 &&  menuResponse != 2 &&  menuResponse != 3 ){
		while( menuResponse != 1 &&  menuResponse != 2 &&  menuResponse != 3 ){
			printf("\nOps! Voce não digitou uma opcao valida, escolha novamente.\n\n");
			menuPrincipal();
			printf("\nDigite aqui ==>> ");
			scanf("%d", &menuResponse);
		}
	}

	int ordemPrimeiraMatriz;

	printf("Digite a ordem da matriz. Ex: 3\n");
	scanf("%d", &ordemPrimeiraMatriz);

	int matrizUm[ordemPrimeiraMatriz][ordemPrimeiraMatriz];

	// Recebe os valores
	for ( int contadorLinha = 0; contadorLinha < ordemPrimeiraMatriz; contadorLinha++){
		printf("Digite o valor da primeira matriz na posicao matrizUm[%d][0]: \n", contadorLinha);
		scanf("%d", &matrizUm[contadorLinha][0]);

		for ( int contadorColuna = 1; contadorColuna < ordemPrimeiraMatriz; contadorColuna++){
			printf("Digite o valor da primeira matriz na posicao matrizUm[%d][%d]: \n", contadorLinha, contadorColuna);
			scanf("%d", &matrizUm[contadorLinha][contadorColuna]);
		}
	}

	// Imprime os valores
	for ( int contadorLinha = 0; contadorLinha < ordemPrimeiraMatriz; contadorLinha++){
		printf("matrizUm[%d][0] = %d\n", contadorLinha, matrizUm[contadorLinha][0]);

		for ( int contadorColuna = 1; contadorColuna < ordemPrimeiraMatriz; contadorColuna++){
			printf("matrizUm[%d][%d] = %d \n", contadorLinha, contadorColuna, matrizUm[contadorLinha][contadorColuna]);
		}
	}

	return 0;
}