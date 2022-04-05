#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, c, d, new, big;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	if ((a > b) && (a > c) && (a > d)) big = a;
	else if ((b > a) && (b > c) && (b > d)) big = b;
	else if ((c > a) && (c > b) && (c > d)) big = c;
	else if ((d > a) && (d > a) && (d > c)) big = d;
	
	new = a + b + c + d - big;
	
	printf("%d", new);
	
	return 0;
}

