#include <stdio.h>

int main(int argc, char **argv)
{
	int N, X, div = 2;

	do{
		scanf("%d", &N);
		X = N;
	
		if(N <= 1){
			printf("Fatoracao nao e possivel para o numero %d!\n", N);
		}
		else{
			printf("%d = ", N);
			do{
				if (N % div == 0){
					N = ( N / div);
					if(N == 1){
						printf("%d\n", div);
					}else{
						printf("%d x ", div);
					}

				}else{
					div++;			
				}
					
			}while(N != 1);
		}
		
	}while(X <= 1);

	return 0;
}

