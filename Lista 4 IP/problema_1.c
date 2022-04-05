#include <stdio.h>

unsigned long int fat( unsigned int n){
	int cont;
	unsigned long int fat = 1;
	
	for(cont = 1; cont <= n; cont++){
		fat = cont * fat;	
	}
	
	return fat;
}

int main(int argc, char **argv)
{
	unsigned int n;
	unsigned long int fato;
	
	scanf("%ud", &n);
	
	fato = fat(n);
	
	printf("%u! = %lu", n, fato);
	
	return 0;
}

