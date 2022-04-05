#include <stdio.h>
#include <math.h>

#define Max 100
#define Max2 500

typedef struct{ 
	
	int cod;
  
	float val;
  
	char nome[Max];

} curso;

typedef struct{
	
	char nomealuno[Max2];
   
	int codcurso;
   
	int numcred;

} aluno;

int procura(int n, int nc, curso *vetcurso){
	
	int cont;

	for(cont = 0; cont < nc; cont++){
		
		if (vetcurso[cont].cod == n) break; 

	}

  return cont;
}



int main(void){
	
	int nc, i, nu, result;

	scanf("%d", &nc); 
	
	curso vetcurso[nc];
  
  
	if((nc >= 4) && (nc <= 30)){
		
		for(i = 0;i < nc;i++){
			
			scanf("%d %f %[^\n]", &vetcurso[i].cod, &vetcurso[i].val, vetcurso[i].nome);
    
		}

		scanf("%d", &nu); 
		
		aluno vetaluno[nu];

		if((nu >= 1) && (nu <= 1000)){
		   
			for(i = 0;i < nu;i++){
				
				scanf("%*c%[^\n]", vetaluno[i].nomealuno);
					
				scanf("%d %d", &vetaluno[i].codcurso, &vetaluno[i].numcred);

			}
			
			for(i = 0;i < nu;i++){
				
				result = procura(vetaluno[i].codcurso, nc, vetcurso);

				printf("Aluno(a):  %s Curso:  %s Num.  Creditos:  %d Valor Credito:  %.2f Mensalidade:  %.2f\n", vetaluno[i].nomealuno,  vetcurso[result].nome, vetaluno[i].numcred, vetcurso[result].val, (vetcurso[result].val * vetaluno[i].numcred));
          
          
			}

		}
	} 

	return 0;
}
