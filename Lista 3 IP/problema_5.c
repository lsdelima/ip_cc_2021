#include <stdio.h>

int main(int argc, char **argv)
{
	int inicial, razao, progre, cont, res, an = 0;
	
	scanf("%d %d %d", &inicial, &razao, &progre);
	
	for (cont = 1; cont <= progre; cont ++){
		res = inicial + ((cont - 1)*razao);
		an = an + res;
	}
	
	printf("%d", an);
	return 0;
}

