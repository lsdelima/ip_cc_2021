#include <stdio.h>

int main(int argc, char **argv)
{
	int n, x, y;
	
	scanf("%d", &n);
	
	for(x = 1; x < n; x++){
		
		for ( y = 1; y < n; y++){
			if (((x * y )%n) == 1){
				 if(x <= y) printf("(%d,%d)\n", x, y);
			 }
		}  
				
	}  
	
	return 0;
}

