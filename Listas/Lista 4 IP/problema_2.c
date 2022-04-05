#include <stdio.h>

int fibonacci( int t1, int t2, int n){
	int cont, fib;

	for (cont = 3; cont <= n; cont++){
		fib = t1 + t2;
		
		t1 = t2;
		
		t2 = fib;
		
	}
	
	return fib;
}

int main(int argc, char **argv)
{
	int t1, t2, n, fib;
	
	scanf("%d %d %d", &t1, &t2, &n);
	
	fib = fibonacci(t1, t2, n);
	
	printf("%d", fib);
	
	return 0;
}

