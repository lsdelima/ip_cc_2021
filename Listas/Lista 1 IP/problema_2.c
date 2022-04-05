#include <stdio.h>

int main(int argc, char **argv)
{
	float ce, fa, po , me;
	
	scanf("%f \n %f",&fa , &po);
	
	ce = (5 * (fa - 32)) / 9;
	
	me = po * 25.4;
	
	printf("O VALOR EM CELSIUS = %.2lf \n", ce);
	
	printf("A QUANTIDADE DE CHUVA E = %.2lf \n", me);
	
	return 0;
}

