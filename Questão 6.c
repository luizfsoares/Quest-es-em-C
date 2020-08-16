#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

void primo(int m, int *p1, int *p2){
	int i,j;
	bool sair1 = true;
	bool sair2 = true;
	
	//menor primo
	for(i = m+1; sair1; i++){
		for(j=i-1; j>1; j--){
			
			if(i%j == 0){
				
				break;
			}
			
			if(j==2){
				*p2 = i;
				sair1=false;
				break;
			}
			
		}
		
	}
	
	//maior primo
	for(i=m-1; sair2; i--){
		for(j=i-1; j>1;j--){
			
			if(i%j == 0){
				
				break;
			}
			
			if(j==2){
				
				*p1 = i;
				sair2=false;
				break;
			}
			
			
		}
	}
	return;
}

int main(){
	int m, p1, p2;
	
	//teste
	printf("Digite um numero para teste: \n");
	scanf("%d", &m);
	
	primo(m, &p1, &p2);
	
	printf("P1 = %d e P2 = %d\n", p1,p2);
}
