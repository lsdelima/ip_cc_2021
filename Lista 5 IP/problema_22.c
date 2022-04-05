#include <stdio.h>

#define MAX 5000

int main(int argc, char **argv)
{
	int n, cont, cont2, igual = 0, contigual = 0;
	
	scanf("%d", &n);
	
	if((n > 0) && (n <= MAX)){
		
		int vet[n];
		
		for(cont = 0; cont < n;cont++){
			scanf("%d", &vet[cont]);
		}
		
		for(cont = 0; cont < n;cont++){
			for(cont2 = 0; cont2 < n;cont2++){
				if(vet[cont] == vet[cont2]) igual++; 
				
			}	
			
			if (igual == 1) contigual++;
			igual = 0;
		}
		
		printf("%d\n", contigual);
		
		
			
	}
	return 0;
}

