#include <stdio.h>

#define MAX 10000

int main(int argc, char **argv)
{
	int N, cont, maior = 0, menor;
	
	scanf("%d", &N);
	
	if((N >= 1) && (N <= MAX)){
		
		int seq[N]; 
		
		for(cont = 0;cont < N;cont++){
			scanf("%d", &seq[cont]);
			
		}
		
		menor = seq[0];
		for(cont = 0;cont < N;cont++){
			if(cont == N-1)printf("%d\n", seq[cont]);
			else printf("%d ", seq[cont]);
			
			if(seq[cont] >= maior) maior = seq[cont];
			if(menor >= seq[cont]) menor = seq[cont];
		}
		
		for(cont = cont-1;cont >= 0;cont--){
			if(cont == 0)printf("%d\n", seq[cont]);
			else printf("%d ", seq[cont]);
			
		}
		
		printf("%d\n", maior);
		printf("%d\n", menor);
	}
	
	return 0;
}

