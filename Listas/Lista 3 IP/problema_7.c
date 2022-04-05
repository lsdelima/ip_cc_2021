#include <stdio.h>

int main(int argc, char **argv)
{
	int mat, pre;
	double p1, p2, p3, p4, p5, p6, p7, p8, l1, l2, l3, l4, l5, tf, nf;
	
	while(mat){
		scanf("%d %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %d", &mat, &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &l1, &l2, &l3, &l4, &l5, &tf, &pre);
		
		nf = (0.7 * ((p1 + p2 + p3 + p4 + p5 + p6 + p7 + p8)/8)) + (0.15 * ((l1 + l2 + l3 + l4 + l5)/5)) + (0.15 * tf);
		
		if ((p1 == -1) && (p2 == -1) && (p3 == -1) && (p4 == -1) && (p5 == -1) && (p6 == -1) && (p7 == -1) && (p8 == -1) && (l1 == -1) && (l2 == -1) && (l3 == -1) && (l5 == -1) && (tf == -1) && (pre == -1) && (mat == -1))break;
		
		if ((nf >= 6) && ( pre >= (128 * 0.75))){
			printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: APROVADO \n", mat, nf);
		
		} else if ((nf >= 6) && ( pre < (128 * 0.75))){
			printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR FREQUENCIA \n", mat, nf);
		
		} else if ((nf < 6) && ( pre >= (128 * 0.75))){
			printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA \n", mat, nf);
		
		} else if ((nf < 6) && ( pre < (128 * 0.75))){
			printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA \n", mat, nf);
		
		} 
	
	
	}
	
	return 0;	
}

