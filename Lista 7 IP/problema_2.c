#include <stdio.h>
#include <string.h>

#define Max 50

typedef struct{
	
	char nome[Max];
    
    float preco; 
    
}fruta;

int main(void){
	
	int nt, nf, nc, cont, cont2, cont3, quant;
  
	double precof;
  
	char frut[Max];
  
	scanf("%d", &nt);

    for(cont = 0; cont < nt;cont++){
		
		scanf("%d", &nf);
		
		fruta vet[nf];
		
		precof = 0;

        for(cont2 = 0;cont2 < nf;cont2++){
			
			scanf("%s", vet[cont2].nome);
          
			scanf("\n%f", &vet[cont2].preco);
          
        }
        
        scanf("%d", &nc);
        
        for(cont3 = 0;cont3 < nc;cont3++){
			
			scanf("%s", frut);
			
			scanf("\n%d", &quant);
          
			for(cont2 = 0;cont2 < nf;cont2++){
			  
				if((strcmp(vet[cont2].nome, frut)) == 0){
					
					precof = (vet[cont2].preco*quant) + precof;
				}
			}

		}

      printf("R$ %.2lf\n", precof);
    }

return 0;
}
