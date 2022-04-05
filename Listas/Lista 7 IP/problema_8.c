#include <stdio.h>
#include <stdlib.h>

#define Smax 1000

typedef struct{ 
	
	int cod;
	
	float val;
	
	char *nome;

} curso;

typedef struct{
	
	char *nomealuno;
	
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
	
	int nc, i, nu, result, cont;
  
	char str[Smax];
  
	scanf("%d", &nc); 

	curso vetcurso[nc];
  
	if((nc >= 4) && (nc <= 30)){
		
		for(i = 0;i < nc;i++){

			vetcurso[i].nome = NULL;

			scanf("%d %f %[^\n]", &vetcurso[i].cod, &vetcurso[i].val, str);
      
			for(cont = 0; str[cont] != '\0'; cont++);
			
			cont++;

			vetcurso[i].nome =  (char*) malloc (cont* sizeof(char));

			sprintf(vetcurso[i].nome,"%s", str);
			
		}

		scanf("%d", &nu); 
		
		aluno vetaluno[nu];

		if((nu >= 1) && (nu <= 1000)){
			
			for(i = 0;i < nu;i++){

				vetaluno[i].nomealuno = NULL;
           
				scanf("%*c%[^\n]", str);

				scanf("%d %d", &vetaluno[i].codcurso, &vetaluno[i].numcred);

				for(cont = 0; str[cont] != '\0'; cont++);
				
				cont++;
          
				vetaluno[i].nomealuno =  (char*) malloc (cont * sizeof(char));

				sprintf(vetaluno[i].nomealuno,"%s", str);

			}

			for(i = 0;i < nu;i++){
				
				result = procura(vetaluno[i].codcurso, nc, vetcurso);

				printf("Aluno(a):  %s Curso:  %s Num.  Creditos:  %d Valor Credito:  %.2f Mensalidade:  %.2f\n", vetaluno[i].nomealuno,  vetcurso[result].nome, vetaluno[i].numcred, vetcurso[result].val, (vetcurso[result].val * vetaluno[i].numcred));
      
			}
		}
	
		for(i = 0;i < nc;i++) free(vetcurso[i].nome);
	
		for(i = 0;i < nu;i++) free(vetaluno[i].nomealuno);	
		
	} 
	
    return 0;
}
