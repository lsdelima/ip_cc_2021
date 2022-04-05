#include <stdio.h>

int main(int argc, char **argv)
{
	float carro, dist, impo,car_var;
	
	scanf("%f %f %f", &carro, &dist, &impo);
	
	dist = (dist/100) * carro;
	
	impo = (impo/100) * carro;
	
	car_var = carro + dist + impo;
	
	printf("O VALOR DO CARRO E = %.2f\n",car_var);
	
	return 0;
}

