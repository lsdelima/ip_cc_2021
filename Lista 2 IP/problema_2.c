#include <stdio.h>

int main(int argc, char **argv)
{
	int n1, n2, n3, novo, quad;
	
	scanf("%d %d %d", &n1, &n2, &n3);
	
	if ((n1 > -10 && n2 > -10 && n3 > -10) && (n1 < 10 && n2 < 10 && n3 < 10)){
		
		if (n1 > -10 && n1 < 0 ) n1 = n1 * -1;
		if (n2 > -10 && n2 < 0 ) n2 = n2 * -1;
		if (n3 > -10 && n3 < 0 ) n3 = n3 * -1;
		
		novo = (n1*100) + (n2*10) + (n3*1); 
		
		quad = novo * novo;
		
		printf("%d, %d", novo,quad);
		
		
	}else printf("DIGITO INVALIDO");
	
	return 0;
}

