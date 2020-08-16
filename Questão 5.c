#include <stdio.h>
#include <stdlib.h>


int numeroPerfeito(int n){
	int i, numDivisores=0, somatorio=0;

	for (i=n-1; i>0; i--){
		
		if(n%i == 0){
			numDivisores++;
			somatorio += i;
		}
	}
	
	if (somatorio == n){
		
		printf("Eh Perfeito\n");
	}
	else{
		printf("Nao eh perfeito\n");
	}
	
	//retorno do resultado para main
	return numDivisores;
}



int main(){
	
	int n, numDivisores;
	scanf("%d", &n);
	numDivisores = numeroPerfeito(n);
	
	printf("Possui %d divisores\n", numDivisores);
}
