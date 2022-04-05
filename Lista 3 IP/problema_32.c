#include <stdio.h>
#include <math.h>

long int fat( unsigned int n){
	int cont;
	unsigned long int fat = 1;
	
	for(cont = 1; cont <= n; cont++){
		fat = cont * fat;	
	}
	
	return fat;
}

int main(int argc, char **argv)
{	
	double x, e = 0.0;
	int N, cont;
	
	scanf("%lf %d", &x, &N);
	
	for(cont = 0;cont <= N; cont++){
		if(cont %2 == 0){
			e = e + ((pow(x,cont))/(fat(cont)));
			
		}else{
			e = e + ((pow(x,cont))/(fat(cont)));
			
		}
			
	}
	
	printf("e^%.2lf = %.6lf", x ,e);
	
	return 0;
}

