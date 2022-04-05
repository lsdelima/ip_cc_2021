#include <stdio.h>

int main(int argc, char **argv)
{
	int n, cont;
	double res = 0, x;

	scanf("%d", &n);
	
	if(n >= 1){
		for(cont = 1; cont <= n; cont++){
			x = cont;
			res= (1/(x)) + res; 
		}
		printf("%lf", res);
		
	}else{
		printf("Numero invalido!");
		
	}

	return 0;
}

