#include <stdio.h>

int main(int argc, char **argv)
{
	int cont, cool, pes;
	double pop, ger, arq, cad, red;
	
	scanf("%d \n", &cool);
	
	for(cont = 1; cont <= cool ;cont++){
		
		scanf("%d %lf %lf %lf %lf",  &pes, &pop, &ger, &arq, &cad);
		
		red = ((pes * pop/100)* 1.00) + ((pes * ger/100)* 5.00) + ((pes * arq/100)* 10.00) + ((pes * cad/100)* 20.00);
		
		printf("A RENDA DO JOGO N. %d E = %.2lf\n", cont, red);
		
			
	}
	
	return 0;
}

