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
	double x, cos = 0.0;
	int N, cont;
	
	scanf("%lf %d", &x, &N);
	
	for(cont = 0;cont <= N; cont++){
		if(cont %2 == 0){
			cos = cos + ((pow(x,2*cont))/(fat(2*cont)));
			
		}else{
			cos = cos - ((pow(x,2*cont))/(fat(2*cont)));
			
		}
			
	}
	
	printf("cos(%.2lf) = %.6lf", x ,cos);
	
	return 0;
}

