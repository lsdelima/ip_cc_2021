#include <stdio.h>

int main(int argc, char **argv)
{
	int x, y, cont = 0;
	
	scanf("%d %d", &x, &y);
	
	if((x % 2) == 0){
		
		while(cont < y){
			if((x % 2) == 0){
			cont++;
			printf("%d ", x); 
			
			}
			x ++;
		}
	}else{
		printf("O PRIMEIRO NUMERO NAO E PAR");
		
	}
	
	return 0;
}

