#include <stdio.h>

int main(int argc, char **argv)
{
	int Max, linha, coluna, cont, contpot, pot;
	
	scanf("%d", &Max);
	
	scanf("%d", &pot);
	
	if((Max > 0) && (Max <= 10)){
	
		float vet[Max][Max], vet2[Max][Max], res[Max][Max], aux;
		
		for (linha = 0;linha < Max;linha++){
			for (coluna = 0;coluna < Max;coluna++){
				scanf("%f", &vet[linha][coluna]);
				
				vet2[linha][coluna] = vet[linha][coluna];
				
				
			
			}
			
		}
		
		for (contpot = 1;contpot < pot;contpot++){
		
			for (linha = 0;linha < Max;linha++){
				for (coluna = 0;coluna < Max; coluna++){
					
					aux = 0;
					
					for (cont = 0;cont < Max; cont++){
						aux = vet[linha][cont] * vet2[cont][coluna] + aux;
					}
					
					res[linha][coluna] = aux;
					
				}	
			}
			
			for (linha = 0;linha < Max;linha++){
				for (coluna = 0;coluna < Max; coluna++){
					vet[linha][coluna] = res[linha][coluna];
					
				}	
			}
			
		}
			
		for (linha = 0; linha< Max; linha++){
			for (coluna = 0;coluna < Max; coluna++){
				 if(coluna + 1 == Max) printf("%.3f\n", res[linha][coluna]);
				  else printf("%.3f ", res[linha][coluna]);
				
			} 
					
		}
		
	}
	
	return 0;
}
