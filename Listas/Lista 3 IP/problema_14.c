#include <stdio.h>

int main(int argc, char **argv)
{
	int N, x, y, cont = 0;
	
	scanf("%d", &N);
	
	if (N <2){
		printf("Campeonato invalido!");
		
	}else if (N >= 2){
		for (x = 1; x <= N; x++){
			for( y = (x+1); y <= N; y++){
				cont ++;
				printf("Final %d: Time%d X Time%d\n", cont, x, y);
		}	}

	}
	
	return 0;
}

