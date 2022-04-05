#include <stdio.h>

#define Max 100

int main(int argc, char **argv)
{
	int cont, cont2 ,k ,g, bord, vbord;
	
	scanf("%d", &k);
	
	scanf("%d", &g);
	
	scanf("%d", &bord);

	scanf("%d", &vbord);
		
	if (((k > 0) && (g > 0)) && ((k <= Max) && (g <= Max))){
		
		unsigned char vet[k][g];

			for (cont = 0; cont< k; cont++){
				for (cont2 = 0;cont2 < g; cont2++){
					vet[cont][cont2] = 0;
				
				}
			}
			
			for (cont = 0; cont< bord; cont++){
				for (cont2 = 0;cont2 < g; cont2++){
					vet[cont][cont2] = vbord;
				
				}
			}
			
			
			for (cont = 0; cont< k; cont++){
				for (cont2 = 0;cont2 < bord; cont2++){
					vet[cont][cont2] = vbord;
				
				}
			}
			
			for (cont = (k-1); cont > ((k-1)-bord); cont--){
				for (cont2 = 0;cont2 < g; cont2++){
					vet[cont][cont2] = vbord;
				
				}
			}
			
			for (cont = 0; cont < k; cont++){
				for (cont2 = (g-1); cont2 > ((g-1)-bord); cont2--){
					vet[cont][cont2] = vbord;
				
				}
			}

			printf("P2\n%d %d\n255\n",g,k);
			
			for (cont = 0; cont< k; cont++){
				for (cont2 = 0;cont2 < g; cont2++){
					printf("%d ", vet[cont][cont2]);
			
			}
			 printf("\n");
				
		}
	
	}
	
	return 0;
}
