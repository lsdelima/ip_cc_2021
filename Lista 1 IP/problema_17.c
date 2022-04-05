#include <stdio.h>

int main(int argc, char **argv)
{
	int num, x, y, z, a;
	
	scanf("%d", &num);
		
	x = num/100;
	
	y = (num - (x*100))/50;
	
	z = (num - (x*100) - (y*50))/10;
	
	a = (num - (x*100) - (y*50) - (z*10));
	
	printf("NOTAS DE 100 = %d \nNOTAS DE 50 = %d \nNOTAS DE 10 = %d \nMOEDAS DE 1 = %d\n", x, y, z, a);
	
	return 0;
}

