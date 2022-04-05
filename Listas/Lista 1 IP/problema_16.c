#include <stdio.h>
int main(int argc, char **argv)
{
	int num, x, y, z;
	
	scanf("%d", &num);
	
	
	if (num >= 1 && num <= 999){
		
	x = num/100;
	
	y = (num - (x*100))/10;
	
	z = (num - (x*100) - (y*10));
	
	printf("%d%d%d\n", z, y, x);
		
	}
	
	return 0;
}

