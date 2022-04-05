#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	int info, cont;
	
	int bin[31];
	
	long int N;
	
	do{
		
		info = scanf("%ld", &N);
		
		if (info == EOF) break;
		
		N = fabs(N);
		
		for(cont = 31;cont >= 0;cont--){
			if(N % 2 == 0) bin[cont] = 0;
			else bin[cont] = 1;
			
			N = N / 2;	
		}
		
		for (cont = 0; cont <= 31; cont++){
			if (bin[cont] != 0 ) break;
			
		}
		
		if(cont >= 32)printf("%d", 0);
		
		for (cont = cont; cont <= 31; cont++){
			printf("%d", bin[cont]);
			
		}
		
		printf("\n"); 
		
		
	}while(info != EOF);
	
	return 0;
}

