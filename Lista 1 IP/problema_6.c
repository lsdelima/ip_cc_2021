#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b;
	
	float med;
	
	scanf("%d %d", &a, &b); 
	
	med = (a + b);
	med = med/2;
	
	printf("%.3f", med);
	
	return 0;
}

