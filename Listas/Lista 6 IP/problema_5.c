#include <stdio.h>

int main(int argc, char **argv)
{
	int cont, cont2, M, N, ini;
	
	scanf("%d", &M);
	
	scanf("%d", &N);	
	
	if((M > 0) && (N > 0)){

	int vet[M][N];

		for (cont = 0; cont< M; cont++){
			if (cont % 2 == 0) ini = 1;
			else ini = 0;
			
			for (cont2 = 0;cont2 < N; cont2++){
				if((cont2 % 2 == 0) && ini == 1) vet[cont][cont2] = 1;
				else if (((cont2 % 2 != 0) && ini == 1))  vet[cont][cont2] = 0;
				else if((cont2 % 2 == 0) && ini == 0) vet[cont][cont2] = 0;
				else if (((cont2 % 2 != 0) && ini == 0))  vet[cont][cont2] = 1;
				
				
			
			}
			
		}
	
	
	
	for (cont = 0; cont< M; cont++){
			for (cont2 = 0;cont2 < N; cont2++){
			  if(cont2 + 1 == N) printf("%d\n", vet[cont][cont2]);
			  else printf("%d", vet[cont][cont2]);
			
		}
			
	}

	}
	
	return 0;
}
