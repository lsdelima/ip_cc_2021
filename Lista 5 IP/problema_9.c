#include <stdio.h>

#define MAXX 10000

#define MAX 1000

int main(int argc, char **argv)
{
	int N, cont, cont2, contL, aux;
	
	char string[MAX]; char Aux[MAX];
	
	scanf("%d", &N);
	
	if((N>= 1) && (N <= MAXX)){
		for(cont = 0; cont <N; cont++){
			scanf("%*c%[^\n]", string);
			
			for(cont2 = 0;string[cont2] != '\0';cont2++){
				
				aux = string[cont2];
				
				for (contL = 65; contL <= 90; contL++){
					if(string[cont2] == contL) aux = string[cont2] + 3;		
				}
				
				for (contL = 97; contL <= 122; contL++){
					if(string[cont2] == contL) aux = string[cont2] + 3;	
				}
				
				string[cont2] = aux;
				
			}
			
			
			aux = 0;
			sprintf(Aux,"%s", string);
			
			
			for(cont2 = (cont2-1); cont2 >= 0; cont2--){
				Aux[aux] = string[cont2];
				aux++;	
			}
			
			sprintf(string,"%s",Aux);
			
			aux = (aux/2);
			
			for(cont2 = aux; string[cont2] != '\0'; cont2++){
				string[cont2] = string[cont2] - 1;
			}
			
			printf("%s\n",string);
			
		}
	}
	
	return 0;
}

