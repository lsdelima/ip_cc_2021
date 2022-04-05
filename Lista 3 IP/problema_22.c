#include <stdio.h>

int main(int argc, char **argv)
{
	int n, c1, c2, cont;
	
	scanf("%d", &n);
	
	for(cont = 1; cont <= n; cont++){
		for(c2 = 1; c2 < cont; c2++){
			for(c1 = 1; c1 <= (cont-1); c1++){
				if ((cont*cont == (c1*c1) + (c2 * c2)) && (c1 <= c2)) printf("hipotenusa = %d, catetos %d e %d\n", cont, c1, c2);
				
			}
		
		}
		
	}
	
	
	return 0;
}

