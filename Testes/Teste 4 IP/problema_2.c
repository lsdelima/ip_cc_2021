#include <stdio.h>
#include <stdlib.h>

typedef struct {
	
	int nl, nc;
	
	int **dado;
	
}matrix;

matrix *criamatrix(int n){
	
	int cont;
	
	matrix *mat = NULL;
	
	mat = (matrix*) malloc(1 *sizeof(matrix));
	
	(mat->nl) = (mat->nc) = n;
	
	(mat->dado) = (int**) malloc(n *sizeof(int*));
	
	for(cont = 0;cont < n;cont++){
		mat->dado[cont] = (int*) malloc(n *sizeof(int));
		
	}
	
	return mat;
}

void destroimatrix(matrix *mat){
	
	int cont;
	
	for(cont = 0;cont < (mat->nl);cont++){ 
		free(mat->dado[cont]);

	}
	
	free(mat->dado);
	
	free(mat);
}

int ePermutacao(matrix *mat, int n, int *soma){
	
	int *vetpet= NULL, *vetsoma = NULL , cont, cont2, permut = 0, somatot = 0;
	
	vetpet = (int *) calloc(n, sizeof(int));
	
	vetsoma = (int *) calloc(n, sizeof(int));
	
	for(cont = 0;cont < (mat->nl);cont++){
		for(cont2 = 0;cont2 < (mat->nc);cont2++){
			 if((((mat->dado)[cont][cont2]) == 0) || (((mat->dado)[cont][cont2]) == 1)) vetpet[cont] += (mat->dado)[cont][cont2];
			 
			 vetsoma[cont] += (mat->dado)[cont][cont2];
			
		}
	}
	
	for(cont = 0;cont < n;cont++){		
		permut += vetpet[cont];
		
		somatot += vetsoma[cont];
		
	}free(vetpet); free(vetsoma);
	
	if(permut == n){
		*soma = permut;
	
		return 1;
		
	} 
	
	*soma = somatot;
	
	return 0;
}

int main(int argc, char **argv)
{
	int n, cont, cont2, soma, permut;
	
	matrix *mat;
	
	scanf("%d", &n);
	
	mat = criamatrix(n);
	
	for(cont = 0;cont < (mat->nl);cont++){
		for(cont2 = 0;cont2 < (mat->nc);cont2++){
			scanf("%d", &((mat->dado)[cont][cont2]));
			
		}
	}
	
	permut = ePermutacao(mat, n, &soma);
	
	if(permut == 1)printf("%d\nPERMUTACAO\n%d", n, soma);
	
	if(permut == 0)printf("%d\nNAO E PERMUTACAO\n%d", n, soma);
	
	destroimatrix(mat);
	
	return 0;
}
