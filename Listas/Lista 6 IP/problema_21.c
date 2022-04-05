#include <stdio.h>
#include <stdlib.h>

#define tam 6

int DIST[tam][tam] = {   {   0 ,  63 , 210 , 190 ,  -1 , 190},
						 {  63 ,   0 , 160 , 150 ,  95 ,  10},
						 { 210 , 160 ,   0 ,  10 ,   1 ,  10},
						 { 190 , 150 ,  10 ,   0 ,  10 ,  20},
						 {  10 ,  95 ,   7 ,  21 ,   0 ,  80},
						 { 190 ,   2 ,  -1 ,  41 ,  80 ,   0}
				     };

int main() {
	
	int *trj = NULL, N, cont, ip, id, custo = 0;

	scanf("%d", &N);
	
	if((N > 0) && (N <= 1000)){
	
		trj = (int*) calloc(N, sizeof(int));

		for(cont = 0;cont < N;cont++){ 
			scanf("%d", &(trj[cont]));
			
		}
		
		ip = trj[0];
		
		for(cont = 1;cont < N;cont++) {
			
			id = trj[cont];
			
			if( DIST[ip][id] == (-1)) {
				printf("rota invalida!\n");
				
				break;
				
			}
			
			custo = DIST[ip][id] + custo;
			     
			ip = id;
		}

		if(DIST[ip][id] != (-1)){
			 printf("%d\n", custo);
			 
		}
		
		free(trj);
	
	}
	
	return 0;
}
