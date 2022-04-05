#include <stdio.h>

#define MAX 10000

int main(int argc, char **argv)
{
	int N, cont, maior = 0, indM, vezes = 0, sai = 0;
	
	scanf("%d", &N);
	
	
	if((N >= 1) && (N <= MAX)){
		
		int seq[N];
		
		for(cont = 0;cont < N; cont++){
			scanf("%d", &seq[cont]);
			
		}
		
		for(cont = 0;cont < N; cont++){
			if(maior <= seq[cont]){
				maior = seq[cont];
				indM = cont;
			 
			}
			
			if((seq[N-1]) == seq[cont]){
				vezes++;

			}
			
		}
		
		for(cont = 0;cont < N; cont++){
			if(maior == seq[cont]){
				maior = seq[cont];
				indM = cont;
				break; sai = 1;
			}
			if (sai == 1)break;
			
		}
		
		printf("Nota %d, %d vezes\n", seq[N-1], vezes);
		printf("Nota %d, indice %d\n", maior, indM);
		
	};
	
	return 0;
}

