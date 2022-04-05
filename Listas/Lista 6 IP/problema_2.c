#include <stdio.h>

int main(int argc, char **argv)
{
	int cont, cont2, N;
	
	scanf("%d", &N);
	
	int vet[N][N];
	
	if((N >= 1) && (N <= 1000)){

		for (cont = 0; cont< N; cont++){
			for (cont2 = 0;cont2 < N; cont2++){
			scanf("%d", &vet[cont][cont2]);
			
			}
			
		}
	
	}
	
	for (cont = 0; cont< N; cont++){
			for (cont2 = 0;cont2 < N; cont2++){
				if(cont == cont2) printf("%d\n", vet[cont][cont2]);
			
		}
			
	}

	
	return 0;
}
