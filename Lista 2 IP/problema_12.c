#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	double a, b, c, delta, x1, x2;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
	delta = ((b * b) - 4 * a * c);
	
	if(delta < 0){
		printf("RAIZES IMAGINARIAS\n");
		
	} else if ((delta == 0) || (a==0)){
		printf("RAIZ UNICA\n");
		
		if(a != 0) x1 = ((-b)/(2*a));
		else x1 = ((-c)/b);
		
		printf("X1 = %.2lf\n", x1);
		
	}else if (delta > 0){
		
		printf("RAIZES DISTINTAS\n");
		
		x1 = (((-b) + sqrt(delta)) / (2*a));
		x2 = (((-b) - sqrt(delta)) / (2*a));
		
		printf("X1 = %.2lf\n", x1);
		printf("X2 = %.2lf\n", x2);
	
		}
	
	return 0;
}

