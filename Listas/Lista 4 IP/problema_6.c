#include <stdio.h>

double absoluto( double n ){
	if(n >= 0.0) return n;
	else return -n;
}

double raiz( double n, double e ){
	double rk,cont;
	
	if(n == 0){
		printf("r: %.9lf, err: %.9lf\n", 0.0, 0.0);
	
	} else if( n == 1){
		for(cont = 0; cont <= n; cont = cont + 1){
			rk = (cont + (n/cont)) / 2;
			} 
			
		do {
			printf("r: %.9lf, err: %.9lf\n", rk, absoluto(n-(rk*rk)));
			rk = (rk + (n/rk)) / 2;
				
		} while (absoluto(n-(rk*rk)) > e);
		 
	
	} else if( n > 1){
		for(cont = 0; cont <= n; cont = cont + 1){
			rk = (cont + (n/cont)) / 2;
			} 
			
		do {
			printf("r: %.9lf, err: %.9lf\n", rk, absoluto(n-(rk*rk)));
			rk = (rk + (n/rk)) / 2;
				
		} while (absoluto(n-(rk*rk)) > e);
		 
		 printf("r: %.9lf, err: %.9lf\n", rk, absoluto(n-(rk*rk)));
	}
	
	return rk;
}



int main(int argc, char **argv)
{
	double n,e, raizQ;
	
	scanf("%lf %lf",&n , &e);
	
	n = absoluto(n);
	
	raizQ = raiz(n, e);
	
	
	return 0;
}

