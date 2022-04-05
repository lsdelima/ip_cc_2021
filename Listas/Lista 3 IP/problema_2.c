#include <stdio.h>

int main(int argc, char **argv)
{
	int cont, cool;
	double C,F;
	
	scanf("%d \n", &cool);
	
	for(cont = 1; cont <= cool ;cont++){
		
		scanf("%lf",  &F);
		
		C = ((5*(F -32))/9);

		printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", F, C);
			
	}
	
	return 0;
}

