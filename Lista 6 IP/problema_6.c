#include <stdio.h>

#define Max 2

int main(int argc, char **argv)
{
	int linha, coluna , cont;
	
	float vet[Max][Max], vet2[Max][Max], aux;
	
	for (linha = 0; linha< Max; linha++){
		for (coluna = 0;coluna < Max; coluna++){
		scanf("%f", &vet[linha][coluna]);
		
		}
		
	}
	
	for (linha = 0; linha< Max; linha++){
		for (coluna = 0;coluna < Max; coluna++){
			aux = 0;
			
			for (cont = 0;cont < Max; cont++){
				aux = vet[linha][cont] * vet[cont][coluna] + aux;
			}
			
			vet2[linha][coluna] = aux;
			
		}	
	}
		
	for (linha = 0; linha< Max; linha++){
		for (coluna = 0;coluna < Max; coluna++){
			 if(coluna + 1 == Max) printf("%.3f\n", vet2[linha][coluna]);
			  else printf("%.3f ", vet2[linha][coluna]);
			
		} 
				
	}
		
	
	
	return 0;
}
