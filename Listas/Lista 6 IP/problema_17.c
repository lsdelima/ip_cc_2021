#include <stdio.h>
#include <stdlib.h>

typedef struct {
	
	int numero[6];
	
} cartela;

int main(int argc, char **argv)
{
	int n, cont, cont2, contnum, contacert, contsen = 0, contqui = 0, contqua = 0;
	
	cartela *vet = NULL, concurso;
	
	scanf("%d",&n);
	
	if((n >= 1) && (n <= 50000)){
		
		vet = (cartela *) calloc(n, sizeof(cartela));
		
		for(cont = 0;cont < n;cont++){
						
			for(contnum = 0; contnum < 6; contnum ++){
				
				scanf("%d", &(vet[cont].numero[contnum]));
					
			}
			
			
		}
		
			
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
				
				contqua++;
				
				/*printf("QUADRA %d: ", vet[cont].numJogo);
				
				for(contnum = 0; contnum < 6; contnum ++){
				
					for (cont2 = 0; cont2 < 6; cont2++){
					
						if((vet[cont].numero[contnum]) == (concurso.numero[cont2])) printf("%d ", vet[cont].numero[contnum]);
						
					}
						
				}
				
				printf("\n");*/
				
			}if (contacert == 5){
				
				contqui++;
				
				/*printf("QUINA %d: ", vet[cont].numJogo);
				
				for(contnum = 0; contnum < 6; contnum ++){
				
					for (cont2 = 0; cont2 < 6; cont2++){
					
						if((vet[cont].numero[contnum]) == (concurso.numero[cont2])) printf("%d ", vet[cont].numero[contnum]);
						
					}
						
				}
				
				printf("\n");*/
				
				
			}if (contacert == 6){
						
				contsen++;
				
				/*printf("SENA %d: ", vet[cont].numJogo);
				
				for(contnum = 0; contnum < 6; contnum ++){
				
					for (cont2 = 0; cont2 < 6; cont2++){
					
						if((vet[cont].numero[contnum]) == (concurso.numero[cont2])) printf("%d ", vet[cont].numero[contnum]);
						
					}
						
				}
				
				printf("\n");*/
				
			}
			
			
			
		}
		
		
		if (contsen > 0) printf("Houve %d acertador(es) da sena", contsen);
		else printf("Nao houve acertador para sena");
		
		printf("\n");
		
		if (contqui > 0) printf("Houve %d acertador(es) da quina", contqui);
		else printf("Nao houve acertador para quina");
		
		printf("\n");
		
		if (contqua > 0) printf("Houve %d acertador(es) da quadra", contqua);
		else printf("Nao houve acertador para quadra");
		
		printf("\n");
		
		free(vet);		
		

	}
	
	return 0;
}

