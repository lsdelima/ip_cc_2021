#include <stdio.h>

int main(int argc, char **argv)
{
	int vet[Max][Max], cont, cont2;
	
	double det;
	
	for (cont = 0; cont< Max; cont++){
		for (cont2 = 0;cont2 < Max; cont2++){
		scanf("%d", &vet[cont][cont2]);
		
		}
		
	}
	
	det = (vet[0][0] * vet[1][1]) - (vet[1][0] * vet[0][1]);

	printf("%.2lf", det);
	
	return 0;
}

