#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	int N, cont, div = 0;
	
	scanf("%d", &N);
	
	N = fabs(N);
	
	for(cont = 1; cont <= N; cont++){
		if(N % cont == 0) div++;
		printf("%d ", div);	
	}
	
	if(div == 2) printf("PRIMO");
	else printf("NAO PRIMO");
	
	return 0;
}

