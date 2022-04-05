#include "poly.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	FILE *poly;
	
	Poly p1;
	
	p1.coef = NULL;
		
	poly = fopen(argv[1], "rb");
		
	if(!poly){
		printf("Erro na abertura do arquivo.\n");
		
		exit(1);
	}
	
	fread(p1.code, sizeof(char), 4, poly);
	
	if ((p1.code[0] != 'p') && (p1.code[1] != 'o') && (p1.code[2] != 'l') && (p1.code[3] != 'y')){
		printf("Formato de arquivo invalido\n");
		
		fclose(poly);
		
		exit(1);
	}
		
	fread(&p1.p, sizeof(int), 1, poly);
	
	p1.coef = malloc((p1.p+1) * sizeof(double));
	
	fread(p1.coef, sizeof(double), (p1.p+1), poly);
	
	imprime_poly(&p1);
	
	printf("\n");
	
	fclose(poly);
	
	return 0;
}

