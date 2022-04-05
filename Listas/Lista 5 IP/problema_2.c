#include <stdio.h>

int main(int argc, char **argv)
{
	int N, K, cont, contMaior = 0;
	
	do{
		scanf("%d", &N);
				
	}while ((N < 1) || ( N > 1000));
	
	int V[N];
	
	for(cont = 0;cont < N; cont++){
		scanf("%d", &V[cont]);
		
	}
	
	scanf("%d", &K);
	
	for(cont = 0;cont < N; cont++){
		if (V[cont] >= K)contMaior++;
			
	}
	
	printf("%d", contMaior);
	
	return 0;
}

