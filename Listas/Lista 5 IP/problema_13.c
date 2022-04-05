#include <stdio.h>

#define MAX 10000

int main(int argc, char **argv)
{
	int N, cont, aux, cont2;
	
	scanf("%d", &N);

	if((N >= 1) && (N <= MAX)){
		
		int seq[N]; 
		
		for(cont = 0;cont < N;cont++){
			scanf("%d", &seq[cont]);
		}
		
		for(cont = 0;cont < N;cont++){
			
			if (cont < (N-1)){
				for(cont2 = (cont+1);cont2 < N;cont2++){
					if(seq[cont] >= seq[cont2]){
						aux = seq[cont];
						seq[cont] = seq[cont2];
						seq[cont2] = aux;
					}
				}
			
			}
			
			
		}
		
		for(cont = 0;cont < N;cont++){
			printf("%d\n", seq[cont]);
		}
		
	}
	return 0;
}

