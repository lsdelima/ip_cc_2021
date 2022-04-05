#include <stdio.h>

#define MAX 999999

int main(int argc, char **argv)
{
	int N, M, cont, res;
	
	char soma[2*MAX];
	
	do{
		scanf("%d %d", &N, &M);
		
		if((N == 0) && (M == 0)) break; 
		
		res = M + N;
		
		sprintf(soma,"%d", res);
		
		for(cont = 0; soma[cont] != '\0'; cont++){
		
			if (soma[cont] != '0') printf("%c", soma[cont]);
		
		}
		
		printf("\n");
		
	}while((N != 0) && (M != 0));
	
	return 0;
}

