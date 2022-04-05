#include <stdio.h>

int main(int argc, char **argv)
{
	float valor, novo;
	
	scanf("%f", &valor);
	
	novo = ((int)((valor*10)+0.5))/10.0;
	printf("%f\n", novo);
	
	novo = ((int)((valor*100)+0.5))/100.0;
	printf("%f\n", novo);
	
	novo = ((int)((valor*1000)+0.5))/1000.0;
	printf("%f\n", novo);
	 
	return 0;
}

