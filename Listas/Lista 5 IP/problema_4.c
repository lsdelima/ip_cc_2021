#include <stdio.h>

int main(int argc, char **argv)
{
	int N, V, cont;
	
	scanf("%d", &N);
	
	if ((N >= 1) && (N <= 5000)){
	
		int V[N];
		
		for(cont = 0;cont < N; cont++){
			scanf("%d", &V[cont]);
			
		}
		
		for(cont = (N-1);cont >= 0; cont--){
				printf("%d ", V[cont]);
			
		}
		
	}
	
	return 0;
}

