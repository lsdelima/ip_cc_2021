#include <stdio.h>

int main(int argc, char **argv)
{
	int n, contpar = 0, contimp = 0; 
	float x = 0 ,y = 0, medpa, medim;
	
	do{
		
		scanf("%d", &n);
		
		if ((n % 2 == 0) && (n != 0)){
			contpar++;

			x = n + x;
			
		} else if (n != 0){
			contimp++;
			
			y = n + y;
						
		} 		
		
	} while(n != 0);
	
	medpa = x/contpar;
	
	medim = y/contimp;	
	
	printf("\nMEDIA PAR: %.6lf", medpa);
	printf("\nMEDIA IMPAR: %.6lf", medim);
	
	return 0;
}

