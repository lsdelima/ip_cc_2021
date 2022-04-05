#include <stdio.h>

int main(int argc, char **argv)
{
	int n, cont, ele, elea, compri = 1 , comprim = 0; 
	
	scanf("%d", &n);
	
	if(n > 0){
		
	scanf("%d", &ele);
		
	for (cont = 2; cont <= n; cont ++){
		
		elea = ele;
		
		scanf("%d", &ele);
		
		if (ele == elea){
			compri++;
			
		} else{
			
			 if(compri > comprim) comprim = compri;
			 
			 compri = 1;
			
		}	
	}
	
	if(compri > comprim) comprim = compri;
	
	printf("\nO comprimento do segmento de numeros iguais e: %d", comprim);

	}
	
	return 0;
}

