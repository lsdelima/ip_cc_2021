#include <stdio.h>

double computepi( int n ){
	double pi = 1, a, b;
	
	int cont = 1;
	
	do{
	a = cont;
	b = cont + 1;
		
		if(cont % 2 == 0){
			pi = pi * (a/b);
			
		}else{
			pi = pi * (b/a);
		
		}
		
	cont++;
	}while(cont <= n);	
	
	
	return pi*2;
}

int main(int argc, char **argv)
{
	int n;
	double pi;
	
	scanf("%d", &n);
	
	pi = computepi(n);
	
	printf("%.12lf", pi);
	
	return 0;
}

