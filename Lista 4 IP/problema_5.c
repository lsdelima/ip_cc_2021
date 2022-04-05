#include <stdio.h>
#include <math.h>

double raizesEq2Grau(double a, double b, double c, double *x1, double *x2){
	
	double delta;
	
	delta = ((b * b) - 4 * a * c);
	
	if(delta < 0){
		
		return 0;
		
	} else if ((delta == 0) || (a==0)){
		
		if(a != 0) *x1 = ((-b)/(2*a));
		else *x1 = ((-c)/b);
		
		return 1;
		
	}else if (delta > 0){
		
		*x1 = (((-b) + sqrt(delta)) / (2*a));
		*x2 = (((-b) - sqrt(delta)) / (2*a));
		
		return 2;
	
	}
	
	return EOF;
}


int main(int argc, char **argv)
{
	double a, b, c, x1, x2;
	
	int resp;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
	resp = raizesEq2Grau(a, b, c, &x1, &x2); 
	
	if(resp == 0){
		printf("RAIZES IMAGINARIAS\n");
		
	} else if (resp == 1){
		printf("RAIZ UNICA\n");
		
		printf("X1 = %.2lf\n", x1);
		
	}else if (resp == 2){
		
		printf("RAIZES DISTINTAS\n");
		
		if(x1 < x2){
			printf("X1 = %.2lf\n", x1);
			printf("X2 = %.2lf\n", x2);
		}else {
			printf("X1 = %.2lf\n", x2);
			
			printf("X2 = %.2lf\n", x1);	
		}
	
		}
	
	return 0;
}

