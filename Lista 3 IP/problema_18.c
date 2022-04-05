#include <stdio.h>

int main(int argc, char **argv)
{
	float vi, vil, vfl, n, luc, lucF = 0, MF =0;
	int igre = 120, igreF = 0;
	
	scanf("%f %f %f", &vi, &vil, &vfl);
	
	if(vil >= vfl){
		printf("INTERVALO INVALIDO.");
	
	}else{
		
		if(vil >= vi){
			for (n = vil; n > vi; n = n - 0.5){
				igre = igre - 30; 

			}
		}else{
			for (n = vil; n < vi; n = n + 0.5){
				igre = igre + 25; 

			}
		}
		
		
		for(vil = vil;vil <= vfl;vil++){
			luc =  (vil * igre) - ((igre * 0.05) + 200);
			printf("V: %.2f, N: %d, L: %.2f\n", vil, igre, luc);
			
			if(luc > lucF){
				MF = vil;
				lucF = luc;
				igreF = igre;
				
			}
			
			if(vil >= vi){
				igre = igre - 60; 

			}else{
				igre = igre - 50; 
			}
			
		}
		
		printf("Melhor valor final: %.2f\n", MF);
		printf("Lucro: %.2f\n", lucF);
		printf("Numero de ingressos: %d\n", igreF);
		
	}
	
	return 0;
}

