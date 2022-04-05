#include <stdio.h>

#define MAX 1000000

int main(int argc, char **argv)
{
	int N, cont, cont2, fre, mafre = 1, numfre;
	
	scanf("%d", &N);

	if((N > 0) && (N <= MAX)){
		
		int seq[N]; 
		
		for(cont = 0;cont < N;cont++){
			scanf("%d", &seq[cont]);
		}
		
		for(cont = 0;cont < N;cont++){
			
			fre = 0;
			for(cont2 = 0;cont2 < N;cont2++){
				if(seq[cont] == seq[cont2]){
					fre++;
				}
			}
			
			if(fre >= mafre){
				numfre = seq[cont];
				mafre = fre;
				
			}
					
		}
		
		for(cont = 0;cont < N;cont++){
			
			fre = 0;
			for(cont2 = 0;cont2 < N;cont2++){
				if(seq[cont] == seq[cont2]){
					fre++;
				}
			}
			
			if((fre == mafre) && (seq[cont] <= numfre)) {
				numfre = seq[cont];
				mafre = fre;
				
			}
					
		}
		
		printf("%d\n%d", numfre, mafre);
						
	}
	return 0;
}
