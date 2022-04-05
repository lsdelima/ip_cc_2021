#include <stdio.h>

void separaDigitos(int n, int *q, int *w, int *e){
	
	*q = n/100;
	
	*w = (n%100)/10;
	
	*e = ((n%100)%10)/1;
	
	return;	
}

int main(int argc, char **argv)
{
	int n, q, w, e;
	
	scanf("%d", &n);
	
	separaDigitos(n, &q, &w, &e);
	
	printf("%d%d%d",e,w,q);
	
	return 0;
}

