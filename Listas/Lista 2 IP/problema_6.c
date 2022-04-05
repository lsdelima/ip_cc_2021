#include <stdio.h>

int main(int argc, char **argv)
{
	float nota;
	char conc;
	
	scanf("%f", &nota);
	
	if ((nota <= 10) && (nota >= 9)){
		conc = 'A';
		
	}if ((nota < 9) && (nota >= 7.5)){
		conc = 'B';
		
	}if ((nota < 7.5) && (nota >= 6)){
		conc = 'C';
		
	}if ((nota < 6) && (nota >= 0)){
		conc = 'D';
		
	} printf("NOTA = %.1f CONCEITO = %c\n", nota, conc);
	
	return 0;
}

