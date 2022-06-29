#include "poly.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	FILE *poly;
	
	Poly p1;
	
	p1.coef = NULL;
	
	int num_ele, maior_ele, le1, le2, le3;
	
	p1.code[0] = 'p';
	p1.code[1] = 'o';
	p1.code[2] = 'l';
	p1.code[3] = 'y';
	
	poly = fopen(argv[2], "wb");
	
	if(!poly){
		printf("Erro na abertura do arquivo.\n");
		
		exit(1);
	}
	
	num_ele = cont_ele(argv[1]);
	
	Termo *polT = (Termo *) calloc(num_ele, sizeof(Termo));
	
	cria_poly(argv[1], polT);
	
	maior_ele = ordem_poly(polT, num_ele);
	
	p1.p = maior_ele;
	
	p1.coef = malloc((p1.p+1) * sizeof(double));
	
	copia_pont_poly(polT, &p1, num_ele);
	
	le1 = fwrite(p1.code, sizeof(char), 4, poly);
	
	le2 = fwrite(&p1.p, sizeof(int), 1, poly);
	
	le3 = fwrite(p1.coef, sizeof(double), (p1.p+1), poly);
	
	if((le1 == 4) && (le2 == 1) && (le3 == (p1.p+1)))
		printf("Conteúdo escrito com sucesso no arquivo.\n");
	else
		printf("Erro na escrita do arquivo.\n");
	
	free(polT);
	
	fclose(poly);
	
return 0;
}
