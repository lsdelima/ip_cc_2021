#include <stdio.h>

int main(int argc, char **argv)
{
	int n, cont, cubo, soma = 1;
	
	scanf("%d", &n);
	
	for(cont = 1 ;cont <= n;cont++){
		
		printf("%d*%d*%d = ", cont, cont, cont);
		
		cubo = cont* cont* cont;
		
		while (cubo> 0 )  { 
			
			cubo = cubo - soma;
			
			if (cubo> 0 ) printf("%d+", soma);
			else printf("%d ", soma);
			
			soma = soma + 2;
			
		}
		
		printf("\n");
		
	}
	
	return 0;
}

