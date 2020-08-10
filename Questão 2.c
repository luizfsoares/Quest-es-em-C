#include <stdio.h>
#include <stdlib.h>



void pontoDeSela(){
	
	int matriz[5][7];
	int i, j, minimoLinha, maximoColuna, k, casoZero1=0, casoZero2=0;
	int aux1L, aux1C, aux2L, aux2C, numPontos=0;
	
	//preenchimento da matriz
	for (i = 0; i < 5; i++){
		for (j = 0; j < 7; j++){
			
			scanf("%d", &matriz[i][j]);
		}
	}
	
	
	for (i = 0; i < 5; i++){
		
		minimoLinha = matriz[i][0];
		
		for(j = 0; j < 7; j++){
			if(matriz[i][j] < minimoLinha){
				
				minimoLinha = matriz[i][j];	
				aux1L = i;
				aux1C = j;	
				casoZero1++;
			}
		}
		
		//caso nao entre nenhuma vez no condicional
		if(casoZero1 == 0){		
			aux1C = 0;
		}
		
		maximoColuna = matriz[0][aux1C];
		
		for (k = 0; k < 5; k++){
			
			if(matriz[k][aux1C] > maximoColuna){
				
				maximoColuna = matriz[k][aux1C];
				
				aux2L = k;
				aux2C = aux1C;
				casoZero2++;
			}
		}
		
		//caso nao entre nenhuma vez no condicional
		if(casoZero2 == 0){		
			aux2L = 0;
		}
		
		if (minimoLinha == maximoColuna){
			
			numPontos++;
			printf("Tem ponto de sela na posicao [%d][%d]\n", aux2L, aux1C);
			printf("Valor: %d", matriz[aux2L][aux1C]);
		}	
	}
	
	if(numPontos == 0){
		
		printf("Nao ha ponto de sela na matriz\n");
	}
}






int main(){
	
	printf("Preencha a matriz 5X7: \n");
	
	pontoDeSela();
	
	return 0;
}
