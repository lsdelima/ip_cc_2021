#include <stdio.h>

#define Max 1000

int main(int argc, char **argv)
{
	int cont, cont2, N;
	
	scanf("%d", &N);
	
	if((N >= 1) && (N <= Max)){
		
		int vet[N+1][N+1];
		char vet2[N][N];
	
		for (cont = 0; cont< N+1; cont++){
			for (cont2 = 0;cont2 < N+1; cont2++){
				scanf("%d", &vet[cont][cont2]);
			
			}
			
		}
	
	
		for (cont = 0; cont< N+1; cont++){
			for (cont2 = 0;cont2 < N+1; cont2++){
				if ((cont2 + 1 < N+1) && (cont + 1 < N+1)){
					if(((vet[cont][cont2]) + (vet[cont][cont2+1]) + (vet[cont+1][cont2]) + (vet[cont+1][cont2+1])) >= 2) vet2[cont][cont2] = 'S';
					else vet2[cont][cont2] = 'U';
					
				
				}
				
			}

		}
		
		for (cont = 0; cont< N; cont++){
			for (cont2 = 0;cont2 < N; cont2++){
				printf("%C", vet2[cont][cont2]);
			
			}
			printf("\n");	
		}
		
	
	}
	return 0;
}
