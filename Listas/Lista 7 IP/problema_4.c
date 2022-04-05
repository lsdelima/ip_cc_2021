#include <stdio.h>
#include <math.h>

#define Max 1000

typedef struct{
	
	double u;
    
    double x;
    
    double y;
    
    double z;
    
    double norma;
    
} A;

int main(void){
	int nt, i, i2;
  
	scanf("%d", &nt);
	
	A vet[nt];
	
	A aux;

	if((nt >= 2) && (nt <= 1000)){
    
		for(i = 0;i < nt;i++){
			
		  scanf("%lf %lf %lf %lf",&vet[i].u, &vet[i].x ,&vet[i].y, &vet[i].z);
		  
		  vet[i].norma = sqrt((pow(vet[i].u,2)) + (pow(vet[i].x,2)) + (pow(vet[i].y,2)) + (pow(vet[i].z,2)));
		  
		}
    
		for(i = 0;i < nt;i++){
			
			for(i2 = (i+1);i2 < nt;i2++){
				
				if (vet[i].norma >= vet[i2].norma){
					
					aux = vet[i];
					
					vet[i] = vet[i2];
					
					vet[i2] = aux;
				}
         
			}
		}

		for(i = 0;i < nt;i++){
			
		 printf("Vetor:  (%.2lf, %.2lf, %.2lf, %.2lf) Norma:  %.2lf\n",vet[i].u, vet[i].x, vet[i].y, vet[i].z, vet[i].norma);
		 
		}
    
	}

  return 0;
}
