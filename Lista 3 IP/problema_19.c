#include <stdio.h>

int main(int argc, char **argv)
{
	int c, x, y, grao = 0;
	
	scanf("%d", &c);
	
	for(x = 1; x <= 8; x++){
		for(y = 1; y <= 8; y++){
				if(y%2==0)grao = grao + (c*2);else grao = grao + c;
				
		}
		
	} 
	
	printf("%d", grao - c);
	
	return 0;
}

