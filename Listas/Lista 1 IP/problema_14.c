#include <stdio.h>

int main(int argc, char **argv)
{
	int num, new, x, y, z;
	
	scanf("%d", &num);

	x = num/100;
	
	y = (num - (x*100))/10;
	
	z = (num - (x*100) - (y*10));
	
	new = ((x + (y*3) + (z*5))%7);
	
	num = ((num*10)+new);
	
	printf("O NOVO NUMERO E = %d\n", num);
	
	return 0;
}

