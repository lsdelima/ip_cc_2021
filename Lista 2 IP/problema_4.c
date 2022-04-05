#include <stdio.h>

int main(int argc, char **argv)
{
	int num;
	
	scanf("%d", &num);
	
	if((num % 5 == 0) && (num % 3 == 0)) printf("O NUMERO E DIVISIVEL\n");
	else printf("O NUMERO NAO E DIVISIVEL\n");
	
	return 0;
}

