#include <stdio.h>

#define pi 3.14159

int main(int argc, char **argv)

{
	float raio, altu, AC, AL, AT, custo;
	
	scanf("%f", &raio);
	scanf("%f", &altu);
	
	AC = (pi * (raio * raio));
	
	AL = (2 * pi * raio * altu);
	
	AT = (AL + (2*AC));
	
	custo = AT * 100;
	
	printf ("O VALOR DO CUSTO E = %.2f\n", custo);
	
	return 0;
}

