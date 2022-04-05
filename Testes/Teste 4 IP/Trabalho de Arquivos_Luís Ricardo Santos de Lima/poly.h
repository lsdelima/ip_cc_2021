#ifndef poly_h

#include <stdio.h>
#include <stdlib.h>

#define poly_h

#define ID_SIZE 4

typedef struct{
	double coef;
	int expo;
	int sinal;
}Termo;

typedef struct{
	char code[ID_SIZE];
	int p;
	double *coef;
} Poly;

int cont_ele(char expr[]){
	
	int expo, test, cont_am, tam = 0, ele = 0;
  
	float coef;
  
	char c;
 
	while(1){
		
		test = sscanf((expr + tam),"%fx^%d%n", &coef, &expo, &cont_am);
		   
		ele++;
    
		if(test == 0 || test == EOF) break;
		
		tam = cont_am + tam;
 
		test = sscanf((expr + tam),"%c%n", &c, &cont_am);
    
		if(test == 0 || test == EOF) break;
   
		tam = cont_am + tam;
    
	}
  
return ele;
}

void cria_poly(char expr[], Termo *poly){
	
	int expo, test, cont_tam, tam = 0, elem = 0;
  
	float coef;
  
	char c;
 
	while(1){
		
		if (elem == 0){
			
			test = sscanf((expr + tam),"%c%n", &c, &cont_tam);
			
			if(test == 0 || test == EOF) break;
			
			if(c == '-'){
				tam = cont_tam + tam;
				
				poly[0].sinal = -1;
				
			}else{
				poly[0].sinal = 1;
				
			}
		}
		
		test = sscanf((expr + tam),"%fx^%d%n", &coef, &expo, &cont_tam);
		
		poly[elem].coef = coef;
		
		poly[elem].expo = expo;
		
		elem++;
    
		if(test == 0 || test == EOF) break;
		
		tam = cont_tam + tam;
 
		test = sscanf((expr + tam),"%c%n", &c, &cont_tam);
		
		if(test == 0 || test == EOF) break;
		
		tam = cont_tam + tam;
		
		if(c == '-'){
			poly[elem].sinal = -1;
				
		}else{	
			poly[elem].sinal = 1;
			
		}	
    
	}
  
}

int ordem_poly(Termo *poly,int ele){
	
	int cont, cont2;
	
	Termo aux;
	
	for(cont = 0;cont < ele;cont++){
			
		for(cont2 = (cont+1);cont2 < ele;cont2++){
				
			if (poly[cont].expo >= poly[cont2].expo){
					
				aux = poly[cont];
					
				poly[cont] = poly[cont2];
					
				poly[cont2] = aux;

			}   
		}
	}cont--;

return poly[cont].expo;		
}

void copia_pont_poly(Termo *polyI, Poly *polyF, int num_ele){
	
	int cont, cont2;
	
	for(cont = 0;cont <= (polyF->p);cont++){
		for(cont2 = 0;cont2 < num_ele;cont2++){
			if (cont == polyI[cont2].expo)
				polyF->coef[cont] += ((polyI[cont2].coef) * (polyI[cont2].sinal));	
		}
	}
	
}

void imprime_poly(Poly *poly){
	
	int cont, prim_ele;
	
	for(cont = 0;cont <= (poly->p);cont++){
			if (poly->coef[cont] != 0.0){
				prim_ele = cont;
				break;
		}
	}
	
	for(cont = 0;cont <= (poly->p);cont++){
		
		if ((cont != prim_ele) && (poly->coef[cont] > 0.0)) printf("+");
		
		
		if((poly->coef[cont] - (int)(poly->coef[cont]) > 0.0) && poly->coef[cont] != 0.0 && poly->coef[cont] != 1.0 && poly->coef[cont] != -1.0){
			
				printf("%.2lf", poly->coef[cont]);
				
		}else if (poly->coef[cont] != 0.0 && poly->coef[cont] != 0.0 && poly->coef[cont] != 1.0 && poly->coef[cont] != -1.0){
				printf("%.0lf", poly->coef[cont]);
			
	
		}
		
		if ((cont == 1) && (poly->coef[cont] == -1.0)) printf("-x");
		else if ((cont == 1) && ((poly->coef[cont] == 1.0) || (poly->coef[cont] != 0.0))) printf("x");
		
		if ((cont >= 2) && (poly->coef[cont] == -1.0)) printf("-x^%d", cont);
		else if ((cont >= 2) && ((poly->coef[cont] == 1.0) || (poly->coef[cont] != 0.0))) printf("x^%d", cont);
		
	}

}

void soma_poly(Poly *polyF,Poly *poly1,Poly *poly2){
	
	int cont;
	
	for(cont = 0;cont <= (poly1->p) || cont <= (poly2->p);cont++){
		
		if(cont <= (poly1->p)) polyF->coef[cont] += poly1->coef[cont];
		
		if(cont <= (poly2->p)) polyF->coef[cont] += poly2->coef[cont];
		
	}
	
}

void sub_poly(Poly *polyF,Poly *poly1,Poly *poly2){
	
	int cont;
	
	for(cont = 0;cont <= (poly1->p) || cont <= (poly2->p);cont++){
		
		if(cont <= (poly1->p)) polyF->coef[cont] += poly1->coef[cont];
		
		if(cont <= (poly2->p)) polyF->coef[cont] -= poly2->coef[cont];
		
	}
	
}

#endif
