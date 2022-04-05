#include <stdio.h>

int main(int argc, char **argv)
{
	int conta;
	float consumo,valor;
	char tipo;
	
	scanf("%d\n", &conta);
	scanf("%f\n", &consumo);
	scanf("%c", &tipo);
	
	if((tipo == 'R') || (tipo == 'r')){
		valor = (consumo * 0.05) + 5.00;
			
	}if((tipo == 'C') || (tipo == 'c')){
		if(consumo <= 80) valor = 500;
		else valor = ((consumo-80) * 0.25) + 500;
		
	}if((tipo == 'I') || (tipo == 'i')){
		if(consumo <= 100) valor = 800;
		else valor = ((consumo-100) * 0.04) + 800;
		
	}
	
	printf("CONTA = %d\n", conta);
	printf("VALOR DA CONTA = %.2f\n", valor);
	
	return 0;
}

