#include <stdio.h>
#include <string.h>

#define MAX 50
#define SMAX 300

typedef struct Frac{
	
    int num; 
    
    int denominador;
    
}frac;

int buscar(float *vect, int tam);

void imprimir(frac *vect, int tam);

int main(){
	
	frac fraction;
    
    int n, ne, i, j, s = 0;
    
    float resultados[MAX];
    
    frac fractionvet[MAX];

    scanf("%d", &n);
    
    for(i = 0;i < n;i++){

        scanf("%d", &ne);

        for(j = 0;j < ne; j++){

            scanf("%d%*c",&fraction.num);
            
            scanf("%d", &fraction.denominador);
            
            scanf("%*c");  
            
            resultados[j] = (float) ((fraction.num*1.0) / (fraction.denominador));
            
            fractionvet[j].num = fraction.num;
            
            fractionvet[j].denominador = fraction.denominador;

        }
        
        printf("Caso de teste %d\n", i+1);
        
        s = buscar(resultados, ne);

        if (s == 0){
			
            printf("Nao ha fracoes equivalentes na sequencia\n");
            
        }else if(s > 0){
			
           imprimir(fractionvet, ne);
           
        }

    }

    return 0;
}
int buscar(float *vect, int tam){
	
    int i, j, a = 0;
    
    for(i = 0;i < tam;i++){
		
        for(j = (i+1);j < tam;j++){
			
            if(vect[i] == vect[j]) ++a;
        }
        
    }
    
    return a;
}

void imprimir(frac *vect, int tam){
	
    int i, j;

    for(i = 0;i < tam;i++){
		
        for(j = (i+1);j < tam;j++){
			
            if( ((float) ((vect[i].num*1.0) / (vect[i].denominador))) == ((float) ((vect[j].num*1.0) / (vect[j].denominador))) ){
				
              printf("%d/%d equivalente a %d/%d\n",vect[i].num, vect[i].denominador,vect[j].num, vect[j].denominador);

            }
        }
    }
}
