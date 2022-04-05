#include <stdio.h>

void SeparaDigitos(int * A, int *x, int *y, int *z){
	
	*x = *A/100;
	
	*y = (*A%100)/10;
	
	*z = ((*A%100)%10)/1;
	
	return;
}

void inverte(int * A, int * B){
	
	int x, y, z;
	
	SeparaDigitos(A, &x, &y, &z);
	
	* A = (z * 100) + (y * 10) +  (x * 1) ;
	
	SeparaDigitos (B, &x, &y, &z);
	
	* B = (z * 100) + (y * 10) +  (x * 1) ;
	
	return;
}

int main(int argc, char **argv)
{
	int T, A, B, cont;
	
	scanf("%d",&T);
	
	for(cont = 1; cont <= T; cont++){
		
	scanf("%d %d",&A ,&B);
	
	inverte(&A, &B);
	
	if(A>B){
		printf("%d\n", A);
	}else printf("%d\n", B);
			
	}
	
	return 0;
}

