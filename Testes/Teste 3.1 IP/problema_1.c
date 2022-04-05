#include <stdio.h>

#define Max 10

int main(int argc, char **argv)
{
	int nl, nc, cont, cont2, contvet, igual;
	
	scanf("%d %d", &nl, &nc);
	
	if(((nl> 0) && (nc >0)) && ((nl <= Max) && (nc <= Max))){
		
		int mat[nl][nc], vet[nl*nc], vetuni[nl*nc];
		
		contvet = 0;
		for (cont = 0; cont < nl; cont++ ){
			for (cont2 = 0; cont2 < nc; cont2++){
				scanf("%d", &mat[cont][cont2]);
				vet[contvet] = mat[cont][cont2];
				contvet++;
			
			}
			
		}
		
		contvet = 0;
		for (cont = 0; cont < (nl*nc); cont++ ){
			igual = 0;
			for (cont2 = 0; cont2 < (nl*nc); cont2++){
				if(vet[cont] == vet[cont2])igual++;
			}
			
			if(igual == 1){
				vetuni[contvet] = vet[cont];
				contvet++;
			}
		}
		
		
		for (cont = 0; cont < contvet; cont++ ){
			if (cont + 1 >= contvet) printf("%d", vetuni[cont]);
			else printf("%d,", vetuni[cont]);
		
		}
		
		if(contvet == 0) printf("sem elementos unicos");

		
	
		
	}else printf("dimensao invalida");

	
	return 0;
}

