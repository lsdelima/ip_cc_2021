#include <stdio.h>

#define Max 100000

int main(int argc, char **argv)
{
	int n, nn , cont, cont2 = 0, m, achei;
	scanf("%d", &n); int vet[n];
	
	if ((n > 0) && (n <= Max)){
		 for (cont = 0; cont < n; cont++){
			scanf("%d", &vet[cont]);
		 }
		 
		 scanf("%d", &m);
		 if ((m > 0) && (m <= Max)){
		 
			do{
			 
				scanf("%d", &nn);
				 
				achei = 0;
			
				for (cont = 0; cont < n; cont++){
					if (nn == vet[cont]){
						achei = 1;
					}
				}
			 
				if(achei != 1) printf("NAO ACHEI\n");
				else printf("ACHEI\n");
				
				  
			cont2++; 
			}while(cont2 < m);
		 
		}
 
	}
	
	return 0;
}

