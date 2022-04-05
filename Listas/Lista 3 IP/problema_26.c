#include <stdio.h>

int main(int argc, char **argv)
{
	int n, div, divMax, cont;
	
	scanf("%d", &n);
	
	for (cont = 1;cont < n;cont++){
		if (n % cont == 0)div = cont + div;
		
	}
	
	for (cont = 1;cont < n;cont++){
		if (n % cont == 0)divMax = cont;
		
	}
	
	if(n == div){
		printf("%d =",n);
		for (cont = 1; cont<n; cont++){
			if (n%cont==0){
				if(cont != divMax) printf("% d +",cont);
				
				else printf("% d ",cont);
				
			}
			
		}
		printf("= %d (NUMERO PERFEITO)", div);
		
	}else{
		printf("%d =",n);
		for (cont = 1; cont<n; cont++){
			if (n%cont==0){
				if(cont != divMax) printf("% d +",cont);
				
				else printf("% d ",cont);
				
			}
		}
		printf("= %d (NUMERO NAO E PERFEITO)", div);
		
	}
	
	return 0;
}

