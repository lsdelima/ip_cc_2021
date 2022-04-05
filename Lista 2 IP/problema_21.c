#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);

	if ((((fabs(b - c)) < a ) && ( a < (b + c))) || (((fabs(a - c)) < b ) && ( b < (a + c))) || (((fabs(a - b)) < c ) && ( c < (b + c)))) {
		printf("Perimetro = %.1lf", a+b+c);
		
	}else{
		printf("Area = %.1lf", (((a+b)*c)/2));

	}
	
	return 0;
}

