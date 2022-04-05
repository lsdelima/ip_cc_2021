#include <stdio.h>

int main(int argc, char **argv)
{
	
	int cont, num;
	
	scanf("%d", &num);
	
	for(cont = 1; cont <= num ;cont++){
		if ((cont%2) == 0){

		printf("%d^2 = %d\n", cont,(cont*cont));
		
		}
	}
	
	return 0;
}

