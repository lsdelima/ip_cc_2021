#include <stdio.h>

#define Max 200

int main(int argc, char **argv)
{
	int cont, cont2 ,tam, x, y, tam2, mod;
	
	unsigned char fund, fundquad;
	
	scanf("%d", &tam);
	
	scanf("%hhu", &fund);
	
		
	if ((tam > 0) && (tam <= Max)){
		
		unsigned char vet[tam][tam];

			for (cont = 0; cont< tam; cont++){
				for (cont2 = 0;cont2 < tam; cont2++){
					vet[cont][cont2] = fund;
				
				}
			}
			
			do{
				scanf("%d", &x);
				
				scanf("%d", &y);
				
				if ((x <= -1) && (y <= -1)) break;
				
				scanf("%hhu", &fundquad);
				
				scanf("%d", &tam2);
				
				scanf("%d", &mod);
				
				if(mod == 1){
					
					if( (((x - tam2) >= 0) && ((x + tam2) <= tam)) && (((y - tam2) >= 0) && ((y + tam2) <= tam)) ){
						
						for (cont = (x - tam2);cont <= (x + tam2); cont++){
								vet[y + tam2][cont] = fundquad;
								vet[y - tam2][cont] = fundquad;
						}
						
						for (cont = (y - tam2);cont <= (y + tam2); cont++){
								vet[cont][x + tam2] = fundquad;
								vet[cont][x - tam2] = fundquad;
						}
		
					}		
					
				}else if(mod == 2){
					
					if( (((x - tam2) >= 0) && ((x + tam2) < tam)) && (((y - tam2) >= 0) && ((y + tam2) < tam)) ){
						
						for (cont = (y - tam2);cont <= (y + tam2); cont++){
							for (cont2 = (x - tam2);cont2 <= (x + tam2); cont2++){
									vet[cont][cont2] = fundquad;
							}

						}
					}
					
				}
				

			}while((x >= -1) && (y >= -1));
			
			printf("P2\n%d %d\n255\n",tam,tam);
			for (cont = 0; cont< tam; cont++){
				for (cont2 = 0;cont2 < tam; cont2++){
					printf("%hhu ", vet[cont][cont2]);
			
			}
			 printf("\n");
				
		}
	
	}
	
	return 0;
}
