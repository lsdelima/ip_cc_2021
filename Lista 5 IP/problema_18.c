#include <stdio.h>

#define Max 12221

void inverter(int n){
	
	int cont;
	
	char vet[5];
	
	sprintf(vet,"%d",n);

	
	for(cont = 0; vet[cont] != '\0'; cont++);
	cont--;
		
	for(cont = cont; vet[cont] > 0; cont--){
		printf("%c",vet[cont]);
	}
}

int main(int argc, char **argv)
{
	int C, cont, contam, B, E , tam; 
	
	scanf("%d", &C);
	
	if (C > 0){
		
		for(cont = 0;cont < C; cont++){
			
			scanf("%d %d", &B,&E);
			
			if(((B >= 0) && (B <= Max)) && ((E >= 0) && (E <= Max)) && (B <= E)) {
				
				tam = 0;
				for(contam = B; contam <= E; contam++){
					tam++;
					
				}
				
				int vet[tam];
				
				for(contam = 0; contam < tam; contam++){
					
					vet[contam] = B;
					printf("%d",vet[contam]);
					B++;
					
				}contam--;
				
				
				for(contam = contam; contam >= 0; contam--){
					inverter(vet[contam]);
			
				} 
					
			printf("\n");
			}
			
			
		
		}

	}
	
	return 0;
}

