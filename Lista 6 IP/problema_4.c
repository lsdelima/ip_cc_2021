#include <stdio.h>

#define Max 10

int main(int argc, char **argv)
{
	int cont, cont2, M = 0, N =0;
	
	while ((M < 1) || (M > 10)){
		scanf("%d", &M);
	}
	
	while ((N < 1) || (N > 10)){
		scanf("%d", &N);	
	}

	int vet[M][N];

		for (cont = 0; cont< M; cont++){
			for (cont2 = 0;cont2 < N; cont2++){
			scanf("%d", &vet[cont][cont2]);
			
			}
			
		}
	
	
	
	for (cont = 0; cont< M; cont++){
		printf("linha %d: ", cont+1);
			for (cont2 = 0;cont2 < N; cont2++){
			  if(cont2 + 1 == N) printf("%d\n", vet[cont][cont2]);
			  else printf("%d,", vet[cont][cont2]);
			
		}
			
	}

	
	return 0;
}
