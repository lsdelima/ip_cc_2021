#include <stdio.h>
#include <stdlib.h>

typedef struct {
	
	int numJogo;
	
	int numero[6];
	
} cartela;

int main(int argc, char **argv)
{
	int n, cont, cont2, contnum, contacert, contgan = 0;
	
	cartela *vet = NULL, concurso;
	
	scanf("%d",&n);
	
	if((n >= 1) && (n <= 1000)){
		
		vet = (cartela *) calloc(n, sizeof(cartela));
		
		for(cont = 0;cont < n;cont++){
			
			scanf("%d", &(vet[cont].numJogo));
			
			for(contnum = 0; contnum < 6; contnum ++){
				
				scanf("%d", &(vet[cont].numero[contnum]));
					
			}
			
			
		}
		
	
		scanf("%d", &(concurso.numJogo));
			
		for(contnum = 0; contnum < 6; contnum ++){
				
			scanf("%d", &(concurso.numero[contnum]));
					
		}
			
			
		
		
		for(cont = 0;cont < n;cont++){
			
			contacert = 0;
						
			for(contnum = 0; contnum < 6; contnum ++){
				
				for (cont2 = 0; cont2 < 6; cont2++){
					
					if((vet[cont].numero[contnum]) == (concurso.numero[cont2])) contacert++;
						
				}
						
			}
			
			if (contacert == 4){
				contgan++;
				printf("QUADRA %d: ", vet[cont].numJogo);
				
				for(contnum = 0; contnum < 6; contnum ++){
				
					for (cont2 = 0; cont2 < 6; cont2++){
					
						if((vet[cont].numero[contnum]) == (concurso.numero[cont2])) printf("%d ", vet[cont].numero[contnum]);
						
					}
						
				}
				
				printf("\n");
				
			}else if (contacert == 5){
				contgan++;
				printf("QUINA %d: ", vet[cont].numJogo);
				
				for(contnum = 0; contnum < 6; contnum ++){
				
					for (cont2 = 0; cont2 < 6; cont2++){
					
						if((vet[cont].numero[contnum]) == (concurso.numero[cont2])) printf("%d ", vet[cont].numero[contnum]);
						
					}
						
				}
				
				printf("\n");
				
				
			}else if (contacert == 6){
				contgan++;
				printf("SENA %d: ", vet[cont].numJogo);
				
				for(contnum = 0; contnum < 6; contnum ++){
				
					for (cont2 = 0; cont2 < 6; cont2++){
					
						if((vet[cont].numero[contnum]) == (concurso.numero[cont2])) printf("%d ", vet[cont].numero[contnum]);
						
					}
						
				}
				
				printf("\n");
			}
			
			
			
		}
		
		
		if (contgan == 0) printf("NENHUMA CARTELA PREMIADA PARA O CONCURSO %d", concurso.numJogo);
		
		free(vet);		
		
		
		
		
	}
	
	return 0;
}

