#include <stdio.h>
#include <stdlib.h>
#include <string.h>



float calculoDeS(int n){
	double i;
	double resultado = 0;
	char formula[]= "S = ";
	
	if(n == 0){
		printf("Digite um numero maior do que 0\n");
		return 0;
	}
	else{
	
	printf("%s", formula);
	
	}
	
	
	for (i = 1.0; i <= n; i++){
		double numerador =  (i*i) + 1;
		double denominador = (i + 3.0);
		resultado += (numerador / denominador);
		
		printf("%.0lf/%.0lf", numerador, denominador);
		
		
		if(i < n){
			printf(" + ");
		}
		
	}
	
	return resultado;
}



int main(){
	
	printf("Digite o numero de parcelas: \n");
	int n;
	double resultado;	
		
	scanf("%d", &n);
	resultado = calculoDeS(n);
	
	//imprime valor de S
	printf("\nS = %.4lf", resultado);
	
	return 0;
}
