#include <stdio.h>

#define Max 1000

int main(int argc, char **argv)
{
	int n, col, lin, tra = 0;
	
	scanf("%d",&n);
	
	if((n > 1) && (n <= Max)){
		
		int vet[n][n];
		
		for(lin = 0;lin < n;lin++){
			for(col = 0;col < n;col++){
				scanf("%d",&vet[lin][col]);
			}
		}
		

		for(lin = 0;lin < n;lin++){
			for(col = 0;col < n;col++){
				if (lin == col) tra = tra + vet[lin][col];
			}
		}
		
		for(col = 0;col < n;col++){
			for(lin = 0;lin < n;lin++){
				printf("%d ", (tra *vet[col][lin]) + vet[lin][col]);
			
			}
			printf("\n");
			
		}
		
		
		
	}
	
	return 0;
}

