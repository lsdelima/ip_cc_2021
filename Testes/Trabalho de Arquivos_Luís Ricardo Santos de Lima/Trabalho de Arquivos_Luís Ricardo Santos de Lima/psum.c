#include "poly.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	FILE *poly1, *poly2, *polyF;
	
	Poly p1, p2, pf;
	
	p1.coef = NULL;
	
	p2.coef = NULL;
	
	pf.coef = NULL;
	
	int le1, le2, le3;
		
	poly1 = fopen(argv[1], "rb");
	
	poly2 = fopen(argv[2], "rb");
	
	polyF = fopen(argv[3], "wb");
		
	if((!poly1) || (!poly2) || (!polyF))  {
		printf("Erro na abertura do arquivo.\n");
		exit(1);
	}
	
	fread(p1.code, sizeof(char), 4, poly1);
	
	fread(p2.code, sizeof(char), 4, poly2);
	
	if ((p1.code[0] != 'p') && (p1.code[1] != 'o') && (p1.code[2] != 'l') && (p1.code[3] != 'y')){
		printf("Formato de arquivo invalido\n");
		
		exit(1);
	}
	
	if ((p2.code[0] != 'p') && (p2.code[1] != 'o') && (p2.code[2] != 'l') && (p2.code[3] != 'y')){
		printf("Formato de arquivo invalido\n");
			
		exit(1);
	}
		
	fread(&p1.p, sizeof(int), 1, poly1);
	
	fread(&p2.p, sizeof(int), 1, poly2);
	
	p1.coef = malloc((p1.p+1) * sizeof(double));
	
	p2.coef = malloc((p2.p+1) * sizeof(double));
	
	fread(p1.coef, sizeof(double), (p1.p+1), poly1);
	
	fread(p2.coef, sizeof(double), (p2.p+1), poly2);
	
	pf.code[0] = 'p';
	pf.code[1] = 'o';
	pf.code[2] = 'l';
	pf.code[3] = 'y';
	
	if ((p1.p) >= (p2.p)) pf.p = p1.p;
	else  pf.p = p2.p;
	
	pf.coef = malloc((pf.p+1) * sizeof(double));
	
	soma_poly(&pf, &p1, &p2);
	
	le1 = fwrite(pf.code, sizeof(char), 4, polyF);
	
	le2 = fwrite(&pf.p, sizeof(int), 1, polyF);
	
	le3 = fwrite(pf.coef, sizeof(double), (pf.p+1), polyF);
	
	if((le1 == 4) && (le2 == 1) && (le3 == (pf.p+1)))
		printf("Conteúdo escrito com sucesso no arquivo.\n");
	else
		printf("Erro na escrita do arquivo.\n");
	
	fclose(poly1);
	
	fclose(poly2);
	
	fclose(polyF);
	
	return 0;
}

