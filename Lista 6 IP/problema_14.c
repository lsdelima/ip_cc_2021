#include <stdio.h>

#define Max 1000


int main(int argc, char **argv)
{
	int cont, cont2, N, M, maior, menor, contmaior = 0, contmenor = 0;
	
	float permaior, permenor;
	
	scanf("%d %d", &N, &M);
	
	int vet[N][M];
	
	if(((N > 1) && (M >  1)) && ((N <= Max) && (M <= Max))  ){

	for(cont = 0; cont< N; cont++){
		for(cont2 = 0;cont2 < M; cont2++){
			scanf("%d", &vet[cont][cont2]);
				
		}
			
	}
	
	maior = menor = vet[0][0];
	
	for(cont = 0; cont< N; cont++){
		for(cont2 = 0;cont2 < M; cont2++){
			if(vet[cont][cont2] >= maior) maior = vet[cont][cont2];
			
			if(vet[cont][cont2] <= menor) menor = vet[cont][cont2];
				
		}
			
	}
	
	for(cont = 0; cont< N; cont++){
		for(cont2 = 0;cont2 < M; cont2++){
			if(vet[cont][cont2] == maior) contmaior++;
			
			if(vet[cont][cont2] == menor) contmenor++;
				
		}
			
	}
	
	permenor = ((((float)contmenor/(N*M))*100));
	
	permaior = ((((float)contmaior/(N*M))*100));
	
	printf("%d %.2f%%\n%d %.2f%%\n", menor, permenor, maior, permaior);
	
	
	
			
	}
	
	return 0;
}
