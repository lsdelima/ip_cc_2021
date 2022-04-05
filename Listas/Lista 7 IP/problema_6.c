#include <stdio.h>
#include <math.h>

#define Max 200

typedef struct{
	
	int dia;
	
	int mes;
	
	int ano;
	
}data;

typedef struct{
	
	int matricula;
	
	data datanas;
	
	char nome[Max];
	
}aluno;

int ComparaDataNasc(data aluno1, data aluno2){

	if(aluno1.ano < aluno2.ano)
		return 1;
	else if((aluno1.ano == aluno2.ano) && (aluno1.mes < aluno2.mes))
		return 1;
	else if((aluno1.ano == aluno2.ano) && (aluno1.mes == aluno2.mes) && (aluno1.mes < aluno2.mes))
		return 1;

	return 0;
}

int main(void){
	
	int nt, cont, cont2;
	
	scanf("%d",&nt);
	
	aluno aux;
  
	if((nt >= 1) && (nt <= 30)){
		
		aluno vetA[nt];

		for(cont = 0;cont < nt; cont++){
			
			scanf("%d %d %d %d %[^\n]", &vetA[cont].matricula, &vetA[cont].datanas.dia, &vetA[cont].datanas.mes, &vetA[cont].datanas.ano, vetA[cont].nome);
      
		}

		for(cont = 0; cont < nt; cont++){
			
			for(cont2 = (cont + 1); cont2 < nt; cont2++){
					
				if ((ComparaDataNasc(vetA[cont].datanas, vetA[cont2].datanas)) == 1){
						
					aux = vetA[cont];
						
					vetA[cont] = vetA[cont2];
						
					vetA[cont2] = aux;
						
				}

			}	
      
		}


		for(cont = 0;cont < nt;cont++){

			printf("Matric.:  %d Nome:  %s Data Nasc: %d/%d/%d\n", vetA[cont].matricula, vetA[cont].nome, vetA[cont].datanas.dia,  vetA[cont].datanas.mes, vetA[cont].datanas.ano);
      
     
		}


	}
  
	return 0;
}
