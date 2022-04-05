#include <stdio.h>

int main(int argc, char **argv)
{		
	int N, K, cont, atra = 0, nor = 0, cont2 = 0;
	
	scanf("%d %d", &N, &K);
	
	if(N >= 0){
		
		if(K <= 1000){
			
			int vet[N];
			int normal[N];
			
			for (cont = 0; cont < N; cont++){
				scanf("%d", &vet[cont]);
				
				if (vet[cont] > 0){
					atra++;
					
				}else if (vet[cont] <= 0){
					nor++;
					normal[cont2] = cont + 1;
					normal[cont2+1] = '\0';
					cont2++;
					
				}	
				
			}
			
			cont2--;
			
			if (nor >= K){
				printf("NAO\n");
				
				for(cont = cont2; normal[cont] > 0; cont-- ){
					printf("%d\n", normal[cont]);
				}
				
			}else{
				printf("SIM");
			}
			
	}}
	
	return 0;
}

