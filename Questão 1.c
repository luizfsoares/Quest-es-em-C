#include <stdio.h>
#include <stdlib.h>

void primeiraQuestao(){
	
	int i;
	int contagemLetras[26] = {0}; //contadores para as letras do alfabeto
	int aux;
	char frase[100];
	char letraAtual;
	
	scanf(" %[^\n]s", &frase);
	
	for(i = 0; (frase[i] != '\0')&& (i < 30); i++){
		
		//Percorre a frase e transforma a letra em um numero incrementando o array de contagem na posição desse número.
		if((toupper(frase[i]) >= 'A') && (toupper(frase[i]) <= 'Z')){
			
			aux = (int)(toupper(frase[i]) - 'A'); //de 0 a 25
			
			contagemLetras[aux]++;
		}
	}
	
	for(i = 0; i < 26; i++){ // percorre o array de contagem
		
		if(contagemLetras[i] > 1){  //se é maior do que 1 entao se repete
		
			letraAtual = 'A' + (char)i;
			
			printf("A letra %c apareceu %d vezes\n", letraAtual, contagemLetras[i]);
		}	
	}
}


int main(){
	printf("Digite uma frase: \n");
	primeiraQuestao();
	
	return 0;
}
