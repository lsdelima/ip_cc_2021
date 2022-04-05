#include <stdio.h>

int somaDivisores(int n){
	int cont,divs = 0;
	
	for (cont = 1;cont < n;cont++){
		if (n % cont == 0)divs = cont + divs;
		
	}
	
	return(divs);
}

int maxDivisor(int n){
	int cont,divs = 0;
	
	for (cont = 1;cont < n;cont++){
		if (n % cont == 0)divs = cont;
		
	}
	
	return(divs);
}

int main(int argc, char **argv)
{
	int n, div, divMax, cont;
	
	scanf("%d", &n);
	
	div = somaDivisores(n);
	
	divMax = maxDivisor(n);
	
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

