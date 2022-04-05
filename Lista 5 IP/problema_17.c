#include <stdio.h>

#define Max 499

int str(char test, char string[]){
	
	int str = -1, cont;
	
	for(cont = 0;string[cont] != '\0';cont++){
		if (string[cont] == test){
			 str = cont;
			 break;
		 }
	}
	
	return str;
}

int main(int argc, char **argv)
{
	int N, cont, ind; 
	
	char string[Max], test;
	
	scanf("%d", &N);
	
	if ((N >= 1) && (N <= 20)){
		
		for(cont = 1;cont <= N; cont++){
		
			scanf("%*c%c", &test);
			
			scanf("%*c%[^\n]", string);
			
			ind = str(test,string);
			
			if( ind < 0){
				printf("Caractere %c nao encontrado.\n", test);
			}else{
				printf("Caractere %c encontrado no indice %d da string.\n", test,ind);
			}
			
		}

	}
	
	return 0;
}

