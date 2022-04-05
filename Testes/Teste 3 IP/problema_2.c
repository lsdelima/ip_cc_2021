#include <stdio.h>

int main(int argc, char **argv)
{
	int N, cont, cont2, sime1 = 0, sime2 =0;
	
	scanf("%d", &N);
	
	int mat[N][N];
	
	if((N >= 1) && (N <= 10)){
		
		for(cont = 0; cont < N; cont++){
			for(cont2 = 0; cont2 < N; cont2++){
				scanf("%d", &mat[cont][cont2]);
			
			}
		}
		
		for(cont = 0; cont < N; cont++){
			for(cont2 = 0; cont2 < N; cont2++){
				if(cont != cont2){
					if(mat[cont][cont2] == mat[cont2][cont]) sime1++;
				}
			
			}
		}
		
		for(cont = N; cont > 0; cont--){
			for(cont2 = N; cont2 > 0; cont2--){
				if(cont + cont2 != N+1){
					printf("%d %d\n",cont,cont2);
					if(mat[cont][cont2] == mat[cont2][cont]) sime2++;
				}
			
			
			}
		}

		if ((sime1 == ((N*N)-N)) && (N > 1)){
			printf("bissimetrica %d",sime2);
		} else printf("nao bissimetrica");
		
	
	}else printf("dimensao invalida");
	
	
	return 0;
}

