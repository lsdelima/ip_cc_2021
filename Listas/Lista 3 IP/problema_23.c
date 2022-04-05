#include <stdio.h>

int main(int argc, char **argv)
{
	unsigned long int cod;
	float compr, vend;
	int nvend,info;
	

	
	do{
	
		info = scanf("%lu %f %f %d", &cod, &compr, &vend, &nvend);
		
		if (info == EOF) break;
		
		
		
	}while(info != EOF);
	
	
	
	return 0;
}

