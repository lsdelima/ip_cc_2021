#include <stdio.h>

int main(int argc, char **argv)
{
	int n, nn, fat = 1;
	
	scanf("%d", &n);
	
	nn = n;
	
	while(n >= 1){
		fat = (n * fat); 
		n--;
	}
	
	printf("%d! = %d", nn, fat);
	
	return 0;
}

