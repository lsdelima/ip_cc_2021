#include <stdio.h>
#include <stdlib.h>

#define salmin 1200

typedef struct {
	
	int matricula;
	
	int idade;
	
	int numFilhos;
	
	char sexo;
	
	double salario;
	
}funcionario;

int main(int argc, char **argv)
{	
	int n, cont, func47capita2 = 0, funcida3 = 0, funcmae = 0, funpai = 0;
	
	double medida = 0, mediafi = 0;
	
	funcionario *vet = NULL;
	
	scanf("%d",&n);
	
	if((n>= 1) && (n<=500)){
	
	vet = (funcionario *) calloc(n, sizeof(funcionario));
	
		for(cont = 0; cont < n; cont++){
			
			scanf("%d %d %d %c %lf", &(vet[cont].matricula), &(vet[cont].idade), &(vet[cont].numFilhos), &(vet[cont].sexo), &(vet[cont].salario));
			
			medida += vet[cont].idade;
			
			mediafi += vet[cont].numFilhos;
			
			if( ((vet[cont].idade) >  47) && ((((vet[cont].salario)/((vet[cont].numFilhos)+1)) < 2*salmin)) )func47capita2++;
			
		}
		
		medida = medida / cont;
		
		mediafi = mediafi / cont;
		
		for(cont = 0; cont < n; cont++){
			
			if( ((vet[cont].idade) > medida) && ((vet[cont].salario) > (3 * salmin)) ) funcida3++;
			
			if ( ((vet[cont].numFilhos) > mediafi) && (((vet[cont].sexo) == ('F')) || ((vet[cont].sexo) == ('f'))) ) funcmae++;
			
			if ( ((vet[cont].numFilhos) > mediafi) && (((vet[cont].sexo) == ('M')) || ((vet[cont].sexo) == ('m'))) ) funpai++;
			
	
		}
		
		
		printf("%d %d %d %d", funcida3, funcmae, funpai, func47capita2);
		
		free(vet);
		
	}
	
	
	return 0;
}

