#include <stdio.h>

int main(int argc, char **argv)
{
	int hora, ex = 0;
	float valor = 0;
	
	scanf("%d", &hora);
	
	if(hora >= 3){
		while(hora % 3 != 0){
			hora --;
			ex++;
		} valor = (hora / 3 * 10.00) + (ex * 5.00);
	}else (valor = hora * 5.00);
		
	printf("O VALOR A PAGAR E = %.2f", valor);
	
	return 0;
}

