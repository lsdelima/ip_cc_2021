#include <stdio.h>

#define wally 1111

#define wallyup 4
#define wallydown 8
#define wallyright 0
#define wallyleft 0

int main(int argc, char **argv)
{
	int cont, cont2, N, M, up, down, right, left;
	
	scanf("%d %d", &N, &M);
	
	int vet[N][M];
	
	if((N >= 3) && (M >= 3)){

	for(cont = 0; cont< N; cont++){
		for(cont2 = 0;cont2 < M; cont2++){
			scanf("%d", &vet[cont][cont2]);
				
		}
			
	}
	
	for(cont = 0; cont< N; cont++){
		for(cont2 = 0;cont2 < M; cont2++){
			
			if(vet[cont][cont2] == wally){ 
				up = cont - 1;
				down = cont + 1;
				
				right = cont2 + 1;
				left = cont2 - 1;
				
				if(up < 0) up = N - 1;
				if(down >= N) down = 0;
				
				if(right >= N) right = 0 ;
				if(left < 0) left = M - 1;
				
				if ((vet[up][cont2] == wallyup) && (vet[down][cont2] == wallydown) && (vet[cont][left] == wallyleft) && (vet[cont][right]== wallyright)){
					printf("%d %d\n", cont, cont2);
					
					return 0;	
				}
				
				  
			}
		}
	}
	printf("WALLY NAO ESTA NA MATRIZ");
			
	}
	
	return 0;
}
