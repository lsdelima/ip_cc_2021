#include <stdio.h>

#define MAX 100

void le_conjunto(int *vect, int n){
	
	int cont = 0, cont2, aux, dif;
	
	for (cont2 = 0; cont2 < n; cont2++){
			vect[cont2] = EOF;
	}
	
	do{
		scanf("%d", &aux);
		
		dif = 0;
		for (cont2 = 0; cont2 < n; cont2++){
			
			if (aux == vect[cont2]){
				dif = 1;
				break;
			}
			
		}
		
		if (dif == 0){
			vect[cont] = aux;
			cont++;
		}
		
	}while(cont < n);
	
	printf("(");
	for (cont2 = 0; cont2 < n; cont2++){
			
			if(cont2+1 >= n)printf("%d)",vect[cont2]); 
			else printf("%d,",vect[cont2]); 
	}	
	
}


int main(int argc, char **argv)
{
	int C;
	
	scanf("%d",&C);
	
	int conju[C];
	
	if((C >= 1) && (C <= MAX)){

		le_conjunto(conju, C); 
		
	}
	
	return 0;
}

