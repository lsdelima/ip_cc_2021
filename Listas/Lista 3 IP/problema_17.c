#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	int n;
	double e, cont, rk;
	
	scanf("%d",&n);
	scanf("%lf",&e);
	
	n = fabs(n);
	
	if(n == 0){
		printf("r: %.9lf, err: %.9lf\n", 0.0, 0.0);
	
	} else if( n == 1){
		for(cont = 0; cont <= n; cont = cont + 1){
			rk = (cont + (n/cont)) / 2;
			} 
			
		do {
			printf("r: %.9lf, err: %.9lf\n", rk, fabs(n-(rk*rk)));
			rk = (rk + (n/rk)) / 2;
				
		} while (fabs(n-(rk*rk)) > e);
		 
	
	} else if( n > 1){
		for(cont = 0; cont <= n; cont = cont + 1){
			rk = (cont + (n/cont)) / 2;
			} 
			
		do {
			printf("r: %.9lf, err: %.9lf\n", rk, fabs(n-(rk*rk)));
			rk = (rk + (n/rk)) / 2;
				
		} while (fabs(n-(rk*rk)) > e);
		 
		 printf("r: %.9lf, err: %.9lf\n", rk, fabs(n-(rk*rk)));
	}
	
	return 0;
}

