#include <stdio.h>

int main(int argc, char **argv)
{
	int  n, N = 1 , divX, divY, contX, contY, antigo = 0, amigos = 1;
	
	scanf("%d",&n);
	
	if((n >= 2) && (n <= 9)){ 

		do{
			
			divX = 0;
			for( contX = 1; contX < N; contX++){
				if (N % contX == 0) divX = divX + contX;
					
			} 
			
			divY = 0;	
			if (divX != N){ 
				for(contY = 1; contY < divX ; contY++){
					if (divX % contY == 0) divY = divY + contY;
					
				}
			}
			
			if (divY == N){
				if(antigo > divX){
					printf("(%d,%d)\n", divX, N);
					amigos++;
				}
				antigo = divX;
			}
			
			N++;
				
		}while(amigos <= n);
		
	}
	
	return 0;
}

