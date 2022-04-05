#include <stdio.h>
#include <math.h>

#define MAX 1000

int main(int argc, char **argv)
{
	int N, cont, T, cont2, cont3, distancia = 0, menordis;
	
	scanf("%d", &T);

	if((T >= 1) && (T <= 10)){
		
		for(cont = 1; cont <= T; cont++){ 
			
			scanf("%d", &N);
		
			int seq[N]; 
			
			for(cont2 = 0;cont2 < N;cont2++){
				scanf("%d", &seq[cont2]);
			}
			
			menordis = distancia = fabs(seq[0] - seq[1]);
			
			for(cont2 = 0;cont2 < N;cont2++){
				
				for (cont3 = 0;cont3 < N;cont3++){
					
					if (seq[cont2] != seq[cont3]){
						distancia = fabs(seq[cont2] - seq[cont3]);
						if (distancia <= menordis) menordis = distancia;

					}
				
				}
				
			}
			
			printf("%d %d\n",menordis, (N*N));
			
		}
		
	}
	return 0;
}
