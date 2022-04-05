/*usei código da geeksforgeeks.org como referência*/
#include <stdio.h>

#define Max 10

int main(int argc, char **argv)
{
	int cont, cont2, taml, tamc, l = 0, c = 0;
	
	scanf("%d %d", &taml, &tamc);
	
	if(((taml > 0) && (tamc > 0)) && ((taml <= 10) && (tamc <= 10))){
		
		int vet[taml][tamc];
		
		for (cont = 0;cont < taml;cont++){
			for (cont2 = 0;cont2 < tamc;cont2++){
				scanf("%d", &vet[cont][cont2]);
			
			}		
		}
		
		while((l < taml) && (c < tamc)){
			for(cont = c;cont < tamc;cont++){
				printf("%d ", vet[l][cont]);
				
			}l++;
			
			for (cont = l;cont < taml;cont++){
				printf("%d ", vet[cont][tamc-1]);
				
			}tamc--;
			
			if (l < taml){
				for (cont = (tamc-1);cont >= c;cont--){
					printf("%d ", vet[taml - 1][cont]);
					
				}
				taml--;
				
			}
			
			if (c < tamc){
				for (cont = (taml-1);cont >= l;cont--){
					printf("%d ", vet[cont][c]);
					
				}
				c++;
				
			}
	
		}
		
	}else{
		printf("Dimensao invalida\n");
		
	}
	
	return 0;
}

