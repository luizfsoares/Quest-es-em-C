#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int replace(char str[], char atual, char novo){
	
	int numRepeticoes=0, i;
	int tam = strlen(str);
	
	for (i = 0; (str[i] != '\0')&& (i < tam); i++){
		
		//comparacao
		if(str[i] == atual){
			
			str[i] = novo;
			numRepeticoes++;
		}
	}
	
	//palavra nova
	printf("A Palavra modificada eh: ");
	for(i = 0; (str[i] != '\0')&& (i < tam); i++){
		
		printf("%c", str[i]);
	}
	
	
	return numRepeticoes;
	
}


int main (){
	
	int numRepeticoes;
	char palavra[20], atual, novo;
	printf("Digite uma palavra: \n");
	scanf(" %[^\n]s", &palavra);
	printf("Qual letra da palavra deseja substituir? \n");
	scanf(" %c", &atual);
	printf("Por qual letra?\n", &novo);
	scanf(" %c", &novo);
	
	numRepeticoes = replace(palavra, atual, novo);
	
	printf("\nForam realizadas %d substituicoes", numRepeticoes);
	
	
	
	return 0;
}
