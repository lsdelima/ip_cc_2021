#include <stdio.h>
#include <math.h>

int nextpower( int n, int p ){
	
	int potprox = 0, cont = 1;
	
	for ( cont = 1; potprox <= n; cont++){
		
		potprox = (pow(cont,p)); 
		
		if (potprox >= n){
			cont--;
			potprox = (pow(cont,p));
			break;
		}
		
	}
	
	printf("%d -> %d^%d = %d\n",n ,cont,p , potprox);
	
	return potprox;
}

int main(int argc, char **argv)
{
	int n, p;
	
	scanf("%d %d", &n, &p);
	
	nextpower(n, p);
	
	return 0;
}

