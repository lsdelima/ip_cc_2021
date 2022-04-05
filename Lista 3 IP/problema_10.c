#include <stdio.h>

int main(int argc, char **argv)
{
	int cont;
	double n, i, K, s, so, su, mu, di;
	
	scanf("%lf %lf %lf %lf", &n, &i, &K, &s);
	
	so = su = mu = di = i;
	
	if ((n >= 0) && (n <= 9)){
		
		printf("Tabuada de soma:\n");
		for(cont = 1; cont <= K; cont++){
			printf("%.2lf + %.2lf = %.2lf\n", n, so, n + so);
			so = so + s; 
		}  
		
		printf("Tabuada de subtracao:\n");
		for(cont = 1; cont <= K; cont++){
			printf("%.2lf - %.2lf = %.2lf\n", n, su, n - su);
			su = su + s; 
		}  
		
		
		printf("Tabuada de multiplicacao:\n");
		for(cont = 1; cont <= K; cont++){
			printf("%.2lf x %.2lf = %.2lf\n", n, mu, n * mu);
			mu = mu + s; 
		}  
		
		printf("Tabuada de divisao:\n");
		for(cont = 1; cont <= K; cont++){
			printf("%.2lf / %.2lf = %.2lf\n", n, di, n / di);
			di = di + s; 
		}  
	}
	
	return 0;
}

