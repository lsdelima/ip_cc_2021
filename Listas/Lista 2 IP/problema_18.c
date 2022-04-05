#include <stdio.h>

int main(int argc, char **argv)
{
	int x, y, z, a, b, c;
	
	char A, B, C;
	
	scanf("%d %d %d \n", &x, &y, &z);
	
	scanf("%c %c %c", &A, &B, &C);
	
	if ((x <= y) && (x <= z)){
		a = x;
		if(y <= z){
			b = y;
			c = z;
		}else {
			b = z;
			c = y;
		}
	}else if ((y <= x) && (y <= z)){
		a = y;
		if(x <= z){
			b = x;
			c = z;
		}else {
			b = z;
			c = x;
		}
	}else if ((z <= x) && (z <= y)){
		a = z;
		if(x <= y){
			b = x;
			c = y;
		}else {
			b = y;
			c = x;
		}
	}
	
	if ( A == 'A'){
	 printf("%d ", a);
	}else if( A == 'B'){
		printf("%d ", b);
	}else if( A == 'C'){
		printf("%d ", c);
	}
	
	if ( B == 'A'){
	 printf("%d ", a);
	}else if( B == 'B'){
		printf("%d ", b);
	}else if( B == 'C'){
		printf("%d ", c);
	}
	
	if ( C == 'A'){
	 printf("%d ", a);
	}else if( C == 'B'){
		printf("%d ", b);
	}else if( C == 'C'){
		printf("%d ", c);
	}
	
	return 0;
}

