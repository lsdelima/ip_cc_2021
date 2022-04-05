#include <stdio.h>

int main(int argc, char **argv)
{
	int N, V, cont, contpar = 0;
	
	scanf("%d", &N);
	
	if ((N >= 1) && (N <= 1000)){
	
		int V[N];
		
		for(cont = 0;cont < N; cont++){
			scanf("%d", &V[cont]);
			
		}
		
		for(cont = 0;cont < N; cont++){
			if(V[cont] % 2 == 0){
				printf("%d ", V[cont]);
				contpar++;
			}
		}
		
		printf("%d", contpar);
	
	}
	
	return 0;
}

